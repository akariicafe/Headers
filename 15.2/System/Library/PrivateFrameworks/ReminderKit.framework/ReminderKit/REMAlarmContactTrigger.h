@class REMContactRepresentation;

@interface REMAlarmContactTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMContactRepresentation *contactRepresentation;

+ (id)cdEntityName;

- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isTemporal;
- (id)initWithContactRepresentation:(id)a0;
- (id)initWithObjectID:(id)a0 contactRepresentation:(id)a1;

@end
