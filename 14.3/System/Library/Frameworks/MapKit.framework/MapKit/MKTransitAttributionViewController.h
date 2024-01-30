@class NSString, MKMapItem;
@protocol MKTransitAttributionViewControllerDelegate, GEOTransitLineItem;

@interface MKTransitAttributionViewController : _MKTableViewController <GEOResourceManifestTileGroupObserver, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol> {
    BOOL _isAttributionURLAvailable;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) id<GEOTransitLineItem> lineItem;
@property (weak, nonatomic) id<MKTransitAttributionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)_commonInit;
- (id)_attribution;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithMapItem:(id)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)_transitInfoUpdated;
- (BOOL)_hasAttribution;
- (id)_attributionCell;
- (void)_presentTransitAttributionDetails;
- (id)initWithTransitLineItem:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
