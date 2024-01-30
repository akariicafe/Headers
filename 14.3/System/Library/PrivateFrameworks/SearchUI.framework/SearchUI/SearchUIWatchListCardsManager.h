@class NSString, SearchUIWatchListUtilities, WLKCanonicalPlayablesResponse, NSHashTable;

@interface SearchUIWatchListCardsManager : NSObject

@property (retain, nonatomic) NSHashTable *rowModels;
@property (retain, nonatomic) NSString *watchListIdentifier;
@property (retain, nonatomic) WLKCanonicalPlayablesResponse *response;
@property (retain, nonatomic) SearchUIWatchListUtilities *watchListUtility;
@property (nonatomic) BOOL isInUpNext;

+ (BOOL)isUpNextCardSection:(id)a0;

- (void).cxx_destruct;
- (id)currentUpNextTextForRowModel:(id)a0;
- (long long)currentUpNextButtonState;
- (void)addWatchListRowModelObserver:(id)a0;
- (void)toggleUpNextWithDelegate:(id)a0;
- (BOOL)isTappable;
- (id)initWithWatchListIdentifier:(id)a0;

@end
