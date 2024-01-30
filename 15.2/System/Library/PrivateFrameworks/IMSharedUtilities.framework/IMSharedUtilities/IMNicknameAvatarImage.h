@class NSString;

@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *imageFilePath;
@property (readonly, nonatomic) BOOL imageExists;

- (id)imageData;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)publicDictionaryRepresentation;
- (id)initWithImageName:(id)a0 imageData:(id)a1 imageFilePath:(id)a2;
- (id)description;
- (id)init;
- (BOOL)_writeImageData:(id)a0 path:(id)a1 error:(id *)a2;
- (id)initWithImageName:(id)a0 imageFilePath:(id)a1;
- (id)initWithImageName:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 error:(id *)a3;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)a0;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 error:(id *)a3;
- (id)publicDictionaryMetadataRepresentation;
- (id)loadAndReturnImageData;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
