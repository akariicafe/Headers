@interface SFMapsCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (nonatomic) int feedbackType;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFeedbackType:(int)a0;

@end
