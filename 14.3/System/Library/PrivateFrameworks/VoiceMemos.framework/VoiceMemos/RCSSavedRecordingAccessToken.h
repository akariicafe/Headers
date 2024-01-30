@class NSUUID, NSString, NSURL, NSDictionary;

@interface RCSSavedRecordingAccessToken : NSObject <NSSecureCoding, NSCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long accessIntent;
@property (readonly, nonatomic, getter=isExclusive) BOOL exclusive;
@property (readonly, nonatomic) NSURL *compositionAVURL;
@property (readonly, copy, nonatomic) NSString *accessName;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)tokenWithName:(id)a0 accessIntent:(long long)a1 compositionAVURL:(id)a2;

- (void).cxx_destruct;
- (void)setUserInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 accessIntent:(long long)a1 compositionAVURL:(id)a2 identifier:(id)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
