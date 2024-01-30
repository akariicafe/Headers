@class NSString, NSArray, NSDate;

@interface SSMailResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *authorEmail;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *recipientEmails;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (id)getFirstNameFromString:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCompactCardSection;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)buildInlineCardSections;
- (id)fallbackTitleString;
- (id)buildRecipientsString;

@end
