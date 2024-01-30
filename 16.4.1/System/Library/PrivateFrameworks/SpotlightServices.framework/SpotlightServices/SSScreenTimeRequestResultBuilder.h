@class NSArray, NSString, NSDate, NSNumber;

@interface SSScreenTimeRequestResultBuilder : SSResultBuilder

@property (nonatomic) int requestStatus;
@property (retain, nonatomic) NSArray *approvers;
@property (retain, nonatomic) NSDate *expireDate;
@property (retain, nonatomic) NSDate *respondDate;
@property (retain, nonatomic) NSDate *requestDate;
@property (retain, nonatomic) NSString *requestedItemName;
@property (retain, nonatomic) NSString *requestedItemDescription;
@property (retain, nonatomic) NSString *requesterContactIdentifier;
@property (retain, nonatomic) NSNumber *requesterDSID;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *requestStatusString;
@property (retain, nonatomic) NSNumber *requestAmountDuration;

+ (id)bundleId;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildInlineCardSection;
- (id)buildInlineCardSections;
- (id)buildSecondaryTitle;
- (BOOL)buildSecondaryTitleIsDetached;
- (id)buildThumbnail;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
