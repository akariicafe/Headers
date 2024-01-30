@class CLKUIMmapFile, NSBundle, NSMutableDictionary, CLKDevice, NSMutableArray;
@protocol MTLRenderPipelineState, MTLBuffer, MTLDevice;

@interface NTKCharacterResourceLoader : NSObject {
    CLKDevice *_clkDevice;
    NSBundle *_bundle;
    id<MTLDevice> _mtlDevice;
    unsigned long long _clients;
    CLKUIMmapFile *_commonBankLatn;
    CLKUIMmapFile *_commonBankArab;
    CLKUIMmapFile *_commonBankDeva;
    CLKUIMmapFile *_minnieBank;
    CLKUIMmapFile *_mickeyBank;
    id<MTLRenderPipelineState> _renderPipelines[4];
    unsigned long long _viewMtlPixelFormat;
    NSMutableDictionary *_mapping;
    NSMutableArray *_array;
    NSMutableArray *_arrayByLocale[3];
}

@property (readonly, nonatomic) id<MTLBuffer> mtlBuffer;
@property (readonly, nonatomic) unsigned long long bufferOffsetBackground;
@property (readonly, nonatomic) unsigned long long bufferOffsetBody;
@property (readonly, nonatomic) unsigned long long bufferOffsetFoot;
@property (readonly, nonatomic) unsigned long long bufferOffsetArm;
@property (readonly, nonatomic) unsigned long long bufferOffsetHand;
@property (readonly, nonatomic) unsigned long long bufferOffsetHead;
@property (readonly, nonatomic) unsigned long long bufferOffsetSkirt;
@property (readonly, nonatomic) unsigned long long bufferOffsetFlower;

+ (void)_deallocInstanceForDevice:(id)a0;
+ (id)sharedInstanceForDevice:(id)a0 withPixelFormat:(unsigned long long)a1;

- (void)localeChanged;
- (void)prime;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_asyncDeallocInstance;
- (id)getPipelineForProgramType:(unsigned long long)a0;
- (id)mtlTextureWithName:(id)a0;
- (id)textureWithName:(id)a0 prefix:(id)a1;
- (id)textureWithName:(id)a0;
- (id)getMTLTexture:(id)a0;
- (id)initForDevice:(id)a0 withPixelFormat:(unsigned long long)a1;
- (void)_loadMTLBufferData;
- (void)_loadPrograms;
- (void)_loadTextures;
- (void)_setupPipelineForType:(unsigned long long)a0 vertex:(id)a1 fragment:(id)a2 blending:(BOOL)a3 inLibrary:(id)a4 librarySPI:(id)a5;
- (id)_loadBank:(id)a0 toArrays:(unsigned long long)a1 allowNewKeys:(BOOL)a2;
- (void)addClient;
- (void)removeClient;
- (id)mtlTextureWithName:(id)a0 prefix:(id)a1;

@end
