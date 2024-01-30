@class NSArray, NSString, SSURLRequestProperties, NSNumber;

@interface SUStorePageProtocol : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *allowedOrientations;
@property (retain, nonatomic) NSString *copyright;
@property (copy, nonatomic) NSArray *expectedClientIdentifiers;
@property (retain, nonatomic) NSNumber *focusedItemIdentifier;
@property (copy, nonatomic) NSArray *navigationButtons;
@property (retain, nonatomic) NSArray *navigationHistoryItems;
@property (copy, nonatomic) NSArray *navigationMenus;
@property (retain, nonatomic) SSURLRequestProperties *overlayBackgroundURLRequestProperties;
@property (retain, nonatomic) NSString *rootSectionIdentifier;
@property (nonatomic) BOOL shouldDisplayInOverlay;
@property (nonatomic) BOOL shouldExcludeFromNavigationHistory;
@property (nonatomic) BOOL shouldReplaceRootViewController;

- (id)_initCommon;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)navigationButtonForLocation:(id)a0;
- (id)navigationMenuForLocation:(long long)a0;
- (void)setValuesFromStorePageDictionary:(id)a0;
- (id)overlayBackgroundURLRequest;
- (void)setOverlayBackgroundURLRequest:(id)a0;
- (id)_newNavigationButtonsFromArray:(id)a0;
- (id)_newNavigationHistoryItemsFromArray:(id)a0;
- (id)_newNavigationMenusFromArray:(id)a0;

@end
