@class NSString, NSUUID, NSData, NSDate;

@interface CXJoinCallActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *applicationContext;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *activityIdentifier;
@property (retain, nonatomic) NSData *metadata;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) BOOL startWhenStaged;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIdentifier:(id)a0 metadata:(id)a1 applicationContext:(id)a2 activityIdentifier:(id)a3;
- (BOOL)isEqualToJoinCallActivity:(id)a0;

@end
