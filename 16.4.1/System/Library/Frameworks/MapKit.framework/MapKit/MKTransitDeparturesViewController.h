@class NSString, MKMapItem, MKTransitDeparturesDataSource;
@protocol MKTransitDepaturesViewControllerDelegate;

@interface MKTransitDeparturesViewController : _MKTableViewController <MKTransitDeparturesDataSourceHosting, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    BOOL _allowTransitLineSelection;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastMaxWidthBounds;
    BOOL _showNewUI;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) MKTransitDeparturesDataSource *dataSource;
@property (readonly, nonatomic) BOOL isInSiri;
@property (weak, nonatomic) id<MKTransitDepaturesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (double)_trailingSeparatorInsetForNewUI;
- (BOOL)_newStationCardUIEnabled;
- (int)currentTransitCategory;
- (double)defaultLeadingSeparatorInset;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)infoCardThemeChanged;
- (id)initWithMapItem:(id)a0 allowTransitLineSelection:(BOOL)a1;
- (id)separatorColorForTransitDeparturesDataSource:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetsForTransitDeparturesDataSource:(id)a0;
- (id)traitsForTransitDeparturesDataSource:(id)a0;
- (BOOL)transitDeparturesDataSource:(id)a0 canSelectDepartureSequence:(id)a1 transitStationMapItem:(id)a2 transitLine:(id)a3 fromCell:(id)a4;
- (void)transitDeparturesDataSource:(id)a0 didSelectAttribution:(id)a1;
- (void)transitDeparturesDataSource:(id)a0 didSelectConnectionInformation:(id)a1;
- (void)transitDeparturesDataSource:(id)a0 didSelectDepartureSequence:(id)a1 transitStationMapItem:(id)a2 transitLine:(id)a3 fromCell:(id)a4;
- (void)transitDeparturesDataSource:(id)a0 didSelectTransitLine:(id)a1 fromCell:(id)a2;
- (void)transitDeparturesDataSource:(id)a0 showIncidents:(id)a1;
- (void)transitDeparturesDataSourceDidReload:(id)a0;
- (void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)a0;

@end
