@class REMStructuredLocation;

@interface REMAlarmLocationTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) REMStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;

+ (id)cdEntityName;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithStructuredLocation:(id)a0 proximity:(long long)a1;
- (BOOL)isTemporal;
- (id)description;
- (BOOL)isContentEqual:(id)a0;
- (id)initWithObjectID:(id)a0 structuredLocation:(id)a1 proximity:(long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)_deepCopy;
- (void)encodeWithCoder:(id)a0;

@end
