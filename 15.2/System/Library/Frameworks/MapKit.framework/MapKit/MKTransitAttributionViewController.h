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

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (id)initWithMapItem:(id)a0;
- (BOOL)_canShowWhileLocked;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)_attribution;
- (void).cxx_destruct;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)_commonInit;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_transitInfoUpdated;
- (BOOL)_hasAttribution;
- (id)_attributionCell;
- (void)_presentTransitAttributionDetails;
- (id)initWithTransitLineItem:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
