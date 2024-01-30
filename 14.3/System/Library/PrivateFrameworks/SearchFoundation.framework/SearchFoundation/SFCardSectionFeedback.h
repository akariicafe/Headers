@class NSString;
@protocol SFCardSection;

@interface SFCardSectionFeedback : SFFeedback

@property (retain, nonatomic) id<SFCardSection> cardSection;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultId;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCardSection:(id)a0;

@end
