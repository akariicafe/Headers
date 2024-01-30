@class NSString;

@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *imageFilePath;
@property (readonly, nonatomic) BOOL imageExists;

- (id)imageData;
- (id)initWithImageName:(id)a0 imageFilePath:(id)a1;
- (id)publicDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithpublicDictionaryMetadataRepresentation:(id)a0;
- (id)publicDictionaryMetadataRepresentation;
- (id)loadAndReturnImageData;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
