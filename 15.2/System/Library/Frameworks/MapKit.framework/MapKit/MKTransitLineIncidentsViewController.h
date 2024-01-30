@class NSString, MKTransitItemReferenceDateUpdater, MKTransitItemIncidentsController, NSDate;
@protocol GEOTransitLineItem, MKTransitLineIncidentsViewControllerDelegate;

@interface MKTransitLineIncidentsViewController : _MKTableViewController <MKTransitItemReferenceDateUpdaterDelegate, MKStackingViewControllerPreferredSizeUse> {
    MKTransitItemIncidentsController *_incidentsController;
}

@property (readonly, nonatomic) id<GEOTransitLineItem> lineItem;
@property (readonly, copy, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) MKTransitItemReferenceDateUpdater *itemUpdater;
@property (weak, nonatomic) id<MKTransitLineIncidentsViewControllerDelegate> incidentsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_showIncidentDetails;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithLineItem:(id)a0;
- (void).cxx_destruct;
- (void)transitItemReferenceDateUpdater:(id)a0 didUpdateToReferenceDate:(id)a1;
- (id)_incidents;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)updateTransitLineItemIfNeeded;
- (id)_incidentCellForRow:(long long)a0;
- (void)transitUIReferenceTimeUpdated:(id)a0;
- (void)_dismissTransitIncidents;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
