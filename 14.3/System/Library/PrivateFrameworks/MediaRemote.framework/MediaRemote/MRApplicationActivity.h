@class NSUUID, NSString;

@interface MRApplicationActivity : NSObject <NSSecureCoding, NSMutableCopying, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *primaryApplicationDisplayID;
@property (readonly, nonatomic) NSString *secondaryApplicationDisplayID;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) int creatorProcessID;

- (id)initWithPrimaryAppDisplayID:(id)a0 secondaryAppDisplayID:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
