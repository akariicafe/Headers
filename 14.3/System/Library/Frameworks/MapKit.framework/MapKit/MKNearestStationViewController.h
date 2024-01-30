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

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithLineName:(id)a0;
- (void)transitionToState:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)_stateHasContentToDisplay;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
