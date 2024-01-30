@class NSString, WLKCanonicalPlayablesResponse, NSHashTable, SearchUIWatchListState;

@interface SearchUIWatchListCardsManager : NSObject

@property (retain, nonatomic) NSHashTable *rowModels;
@property (retain, nonatomic) NSString *watchListIdentifier;
@property (retain, nonatomic) WLKCanonicalPlayablesResponse *response;
@property (retain, nonatomic) SearchUIWatchListState *watchListState;
@property (nonatomic) BOOL isInUpNext;

+ (BOOL)isUpNextCardSection:(id)a0;

- (BOOL)isTappable;
- (void).cxx_destruct;
- (id)initWithWatchListIdentifier:(id)a0;
- (id)currentUpNextTextForRowModel:(id)a0;
- (long long)currentUpNextButtonState;
- (void)addWatchListRowModelObserver:(id)a0;
- (void)toggleUpNext;

@end
