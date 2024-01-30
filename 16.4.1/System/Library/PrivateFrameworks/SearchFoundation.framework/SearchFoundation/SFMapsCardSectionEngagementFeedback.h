@interface SFMapsCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (nonatomic) int feedbackType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeedbackType:(int)a0;

@end
