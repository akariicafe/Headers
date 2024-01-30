@class SFPunchout;

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback

@property (retain, nonatomic) SFPunchout *destination;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) unsigned long long actionCardType;
@property (nonatomic) unsigned long long actionTarget;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCardSection:(id)a0 destination:(id)a1 triggerEvent:(unsigned long long)a2 actionCardType:(unsigned long long)a3;

@end
