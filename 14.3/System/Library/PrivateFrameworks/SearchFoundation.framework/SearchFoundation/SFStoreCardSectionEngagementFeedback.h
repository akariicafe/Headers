@interface SFStoreCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (nonatomic) long long productPageResult;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProductPageResult:(long long)a0;

@end
