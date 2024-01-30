@class NSString, IMNicknameAvatarImage;

@interface IMNickname : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (retain, nonatomic) IMNicknameAvatarImage *avatar;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *nameHash;
@property (readonly, nonatomic) NSString *imageHash;

+ (id)nameHashWithFirstName:(id)a0 lastName:(id)a1;
+ (id)uniqueFilePathForWritingImageData;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_imageHashCreatedInChunks;
- (id)_sharingState;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 avatar:(id)a2;
- (id)initWithMeContact:(id)a0;
- (id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)a0;
- (BOOL)isUpdateFromNickname:(id)a0 withOptions:(unsigned long long)a1;
- (id)publicDictionaryRepresentation;
- (id)publicDictionaryRepresentationWithoutAvatar;
- (void)updateNameFromContact:(id)a0;

@end
