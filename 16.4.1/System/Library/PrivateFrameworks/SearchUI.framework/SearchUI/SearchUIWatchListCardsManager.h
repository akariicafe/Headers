@class NSString, WLKCanonicalPlayablesResponse, NSHashTable, SearchUIWatchListState;

@interface SearchUIWatchListCardsManager : NSObject

@property (retain, nonatomic) NSHashTable *rowModels;
@property (retain, nonatomic) NSString *watchListIdentifier;
@property (retain, nonatomic) WLKCanonicalPlayablesResponse *response;
@property (retain, nonatomic) SearchUIWatchListState *watchListState;
@property (nonatomic) BOOL isInUpNext;

- (BOOL)isTappable;
- (void).cxx_destruct;
- (void)addWatchListRowModelObserver:(id)a0;
- (id)initWithWatchListIdentifier:(id)a0;

@end
