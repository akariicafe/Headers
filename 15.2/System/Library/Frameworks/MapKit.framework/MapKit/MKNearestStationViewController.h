@class NSString, MKMapItem;
@protocol MKNearestStationViewControllerDelegate;

@interface MKNearestStationViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse> {
    NSString *_lineName;
}

@property (weak, nonatomic) id<MKNearestStationViewControllerDelegate> delegate;
@property (retain, nonatomic) MKMapItem *nearestStation;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithLineName:(id)a0;
- (void)transitionToState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)_stateHasContentToDisplay;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
