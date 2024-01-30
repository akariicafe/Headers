@class NSArray, NSString, UISearchDisplayController, NSTimer, NSObject, NSLock;
@protocol SLPlaceDataSource;

@interface SLSheetPlaceSearchController : NSObject <UITableViewDataSource, SLPlaceDataSourceDelegate> {
    NSTimer *_delayTimer;
    BOOL _isSearching;
    NSString *_searchString;
    int _retryCount;
    NSLock *_retryLock;
}

@property (retain) NSObject<SLPlaceDataSource> *placeDataSource;
@property (retain) UISearchDisplayController *searchDisplayController;
@property (retain) NSArray *searchResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)cancelSearch;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithPlaceDataSource:(id)a0 searchDisplayController:(id)a1;
- (void)performDelayedFetch:(id)a0;
- (void)placeManager:(id)a0 failedWithError:(id)a1;
- (void)placeManager:(id)a0 updatedPlaces:(id)a1;
- (void)searchWithSearchString:(id)a0;

@end
