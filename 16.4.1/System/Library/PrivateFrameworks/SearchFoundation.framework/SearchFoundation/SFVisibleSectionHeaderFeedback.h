@class SFResultSection;

@interface SFVisibleSectionHeaderFeedback : SFFeedback

@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long headerType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSection:(id)a0 headerType:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
