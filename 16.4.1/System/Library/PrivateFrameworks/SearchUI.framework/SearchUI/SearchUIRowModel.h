@class NSUserActivity, NSArray, SFSearchResult, NSString, SFCardSection, SFCard, NSURL;

@interface SearchUIRowModel : NSObject <NSCopying>

@property (nonatomic) unsigned long long queryId;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) SFSearchResult *identifyingResult;
@property (retain, nonatomic) SFCardSection *cardSection;
@property (readonly, nonatomic) NSArray *punchouts;
@property (readonly, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) Class cellViewClass;
@property (readonly, nonatomic) Class collectionViewCellClass;
@property (readonly, nonatomic) SFCard *nextCard;
@property (readonly, nonatomic) BOOL isTappable;
@property (readonly, nonatomic) BOOL isFocusable;
@property (readonly, nonatomic) int separatorStyle;
@property (readonly, nonatomic) BOOL isDraggable;
@property (readonly, nonatomic) NSString *dragTitle;
@property (readonly, nonatomic) NSString *dragSubtitle;
@property (readonly, nonatomic) NSString *dragText;
@property (readonly, nonatomic) NSURL *dragURL;
@property (readonly, nonatomic) NSString *dragAppBundleID;
@property (readonly, nonatomic) BOOL isQuerySuggestion;
@property (readonly, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) BOOL supportsCustomUserReportRequestAfforance;
@property (readonly, nonatomic) BOOL hasLeadingImage;
@property (readonly, nonatomic) BOOL prefersNoSeparatorAbove;
@property (readonly, nonatomic) BOOL fillsBackgroundWithContent;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *coreSpotlightIdentifier;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) NSString *fileProviderIdentifier;
@property (copy, nonatomic) NSString *previewItemTitle;
@property (retain, nonatomic) NSUserActivity *launchActivity;
@property (copy, nonatomic) NSString *launchActivityAppBundleId;

- (id)initWithResult:(id)a0;
- (BOOL)isEqualToModel:(id)a0;
- (id)initWithResults:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCardSection:(id)a0 queryId:(unsigned long long)a1;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2;
- (id)initWithResults:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2;
- (id)requestAppClipObjects;

@end
