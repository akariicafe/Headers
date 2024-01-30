@class NSString;

@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *imageFilePath;
@property (readonly, nonatomic) BOOL imageExists;

- (void)encodeWithCoder:(id)a0;
- (id)imageData;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_writeImageData:(id)a0 path:(id)a1 error:(id *)a2;
- (id)initWithImageName:(id)a0 imageData:(id)a1 imageFilePath:(id)a2;
- (id)initWithImageName:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 error:(id *)a3;
- (id)initWithImageName:(id)a0 imageFilePath:(id)a1;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)a0;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 error:(id *)a3;
- (id)loadAndReturnImageData;
- (id)publicDictionaryMetadataRepresentation;
- (id)publicDictionaryRepresentation;

@end
