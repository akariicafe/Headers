@interface BKSTouchDeliveryUpdate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) unsigned int touchIdentifier;
@property (nonatomic) BOOL isDetached;
@property (nonatomic) unsigned int contextID;
@property (nonatomic) int pid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
