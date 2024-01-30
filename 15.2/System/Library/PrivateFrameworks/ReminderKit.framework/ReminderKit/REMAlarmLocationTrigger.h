@class REMStructuredLocation;

@interface REMAlarmLocationTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) REMStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;

+ (id)cdEntityName;

- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)initWithStructuredLocation:(id)a0 proximity:(long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isTemporal;
- (BOOL)isContentEqual:(id)a0;
- (id)initWithObjectID:(id)a0 structuredLocation:(id)a1 proximity:(long long)a2;

@end
