@interface SFStoreCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (nonatomic) long long productPageResult;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProductPageResult:(long long)a0;

@end
