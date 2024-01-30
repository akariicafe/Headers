@class NSData;

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) BOOL isTemplate;
@property (readonly, nonatomic) NSData *imagePNGData;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageData:(id)a0 dataType:(long long)a1 isTemplate:(BOOL)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initForSubclass;
- (id)initWithImageData:(id)a0 dataType:(long long)a1;
- (id)initWithImagePNGData:(id)a0;

@end
