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

+ (id)uniqueFilePathForWritingImageData;
+ (id)nameHashWithFirstName:(id)a0 lastName:(id)a1;

- (id)init;
- (id)_sharingState;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 avatar:(id)a2;
- (id)publicDictionaryRepresentation;
- (id)_imageHashCreatedInChunks;
- (id)initWithMeContact:(id)a0;
- (id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)a0;
- (id)publicDictionaryRepresentationWithoutAvatar;
- (BOOL)isUpdateFromNickname:(id)a0 withOptions:(unsigned long long)a1;
- (void)updateNameFromContact:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
