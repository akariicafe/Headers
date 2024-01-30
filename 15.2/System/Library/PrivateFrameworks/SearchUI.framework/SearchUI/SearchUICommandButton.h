@class SFCommand, SearchUIWatchListState, NSString;

@interface SearchUICommandButton : TLKTextButton <SearchUICommandButton>

@property (retain) SearchUIWatchListState *watchListState;
@property (retain) SFCommand *command;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
