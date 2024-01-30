@class NSString, SearchUIWatchListState, SFButtonItem;

@interface SearchUICommandButton : TLKTextButton <SearchUICommandButton, SearchUIWatchListDelegate>

@property (retain) SearchUIWatchListState *watchListState;
@property (retain) SFButtonItem *buttonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
