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

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)_attribution;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_commonInit;
- (id)initWithMapItem:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (BOOL)_hasAttribution;
- (id)_attributionCell;
- (void)_presentTransitAttributionDetails;
- (void)_transitInfoUpdated;
- (id)initWithTransitLineItem:(id)a0;

@end
