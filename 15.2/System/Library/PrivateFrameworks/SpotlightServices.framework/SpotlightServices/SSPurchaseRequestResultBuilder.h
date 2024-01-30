@class NSArray, NSString, NSDate;

@interface SSPurchaseRequestResultBuilder : SSResultBuilder

@property (nonatomic) int requestStatus;
@property (nonatomic) double starRating;
@property (retain, nonatomic) NSArray *approvers;
@property (retain, nonatomic) NSDate *requestDate;
@property (retain, nonatomic) NSDate *respondDate;
@property (retain, nonatomic) NSString *ageRating;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appPrice;
@property (retain, nonatomic) NSString *appType;
@property (retain, nonatomic) NSString *requesterContactIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *requestStatusString;
@property (retain, nonatomic) NSString *requesterName;

+ (id)bundleId;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildInlineCardSection;
- (id)buildThumbnail;
- (id)buildDescriptions;
- (id)buildCommand;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)buildInlineCardSections;
- (id)buildSecondaryTitle;
- (id)buildFootnote;
- (BOOL)buildSecondaryTitleIsDetached;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildButtonItems;

@end
