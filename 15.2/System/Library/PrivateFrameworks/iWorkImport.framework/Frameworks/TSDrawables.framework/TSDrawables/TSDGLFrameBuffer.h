@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface TSDGLFrameBuffer : NSObject {
    NSArray *_textureConfigs;
    NSDictionary *_namesToTextureDict;
    NSMutableArray *_currentTextureLookupInfoByAttachment;
    NSMutableArray *_desiredTextureLookupInfoByAttachment;
    NSArray *_textureConfigsByAttachment;
    NSArray *_textureLookupInfosByAttachment;
    long long _currentBindingOption;
    unsigned int _currentDrawBuffers[1];
    int _currentDrawBufferCount;
    unsigned int _currentReadBuffer;
    BOOL _isUsingNonDefaultAttachments;
}

@property (readonly, nonatomic) unsigned int currentGLTexture;
@property (readonly, nonatomic) NSString *currentGLTextureName;
@property (readonly, nonatomic) unsigned int framebuffer;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL isBound;
@property (nonatomic) BOOL shouldDeleteTexturesOnTeardown;
@property (copy, nonatomic) NSString *name;

+ (void)setCurrentGLFramebuffer:(int)a0;
+ (int)currentGLFramebufferWithBindingOption:(long long)a0;
+ (void)setCurrentGLFramebuffer:(int)a0 withBindingOption:(long long)a1;
+ (int)currentGLFramebuffer;

- (void)teardown;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (void)dealloc;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)a0;
- (void)setCurrentTextureNamed:(id)a0 atAttachment:(unsigned int)a1;
- (void)bindFramebuffer;
- (unsigned int)GLTextureNamed:(id)a0;
- (void)setCurrentTextureNamed:(id)a0;
- (void)bindFramebufferWithBindingOption:(long long)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 textureConfigs:(id)a1;
- (void)setupFramebufferIfNecessary;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 textureCount:(unsigned long long)a1;
- (BOOL)p_isCurrentDrawBuffersEqualToDrawbuffers:(unsigned int *)a0 count:(long long)a1;
- (void)p_setDrawBuffersAndReadBuffer;
- (void)p_setFramebufferTextureAtAttachmentIndex:(long long)a0 bindingOption:(long long)a1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)a0 withBindingOption:(long long)a1;
- (void)setCurrentTextureIndex:(unsigned long long)a0 atAttachment:(unsigned int)a1;
- (long long)currentTextureIndexAtAttachment:(unsigned int)a0;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)a0;
- (unsigned int)GLTextureAtIndex:(unsigned long long)a0 attachment:(unsigned int)a1;
- (id)p_currentTextureLookupInfoAtAttachment:(unsigned int)a0;
- (void)setCurrentTextureIndex:(unsigned long long)a0;
- (void)setCurrentTexturesToNext;
- (unsigned int)GLTextureAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeOfGLTextureNamed:(id)a0;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)a0;

@end
