@class REMContactRepresentation;

@interface REMAlarmContactTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMContactRepresentation *contactRepresentation;

+ (id)cdEntityName;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isTemporal;
- (id)description;
- (id)initWithContactRepresentation:(id)a0;
- (id)initWithObjectID:(id)a0 contactRepresentation:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)_deepCopy;
- (void)encodeWithCoder:(id)a0;

@end
