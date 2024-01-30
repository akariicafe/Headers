@class SFResultSection;

@interface SFSectionEngagementFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long triggerEvent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSection:(id)a0 triggerEvent:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
