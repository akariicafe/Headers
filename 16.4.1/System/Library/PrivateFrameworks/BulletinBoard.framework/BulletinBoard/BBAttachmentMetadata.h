@class NSUUID, NSString, NSURL, NSDictionary;

@interface BBAttachmentMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *uniformType;
@property (readonly, copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo;
@property (readonly, nonatomic) BOOL thumbnailHidden;
@property (readonly, nonatomic) BOOL hiddenFromDefaultExpandedView;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasContentModificationsRelativeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithType:(long long)a0 URL:(id)a1 identifier:(id)a2 uniformType:(id)a3 thumbnailGeneratorUserInfo:(id)a4 thumbnailHidden:(BOOL)a5 hiddenFromDefaultExpandedView:(BOOL)a6;

@end
