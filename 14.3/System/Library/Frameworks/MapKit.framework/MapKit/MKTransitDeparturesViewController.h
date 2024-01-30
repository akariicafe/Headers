@class NSString, MKMapItem, MKTransitDeparturesDataSource;
@protocol MKTransitDepaturesViewControllerDelegate;

@interface MKTransitDeparturesViewController : _MKTableViewController <MKTransitDeparturesDataSourceHosting, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    BOOL _allowTransitLineSelection;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastMaxWidthBounds;
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

- (void).cxx_destruct;
- (int)currentTransitCategory;
- (id)traitsForTransitDeparturesDataSource:(id)a0;
- (void)transitDeparturesDataSourceDidReload:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetsForTransitDeparturesDataSource:(id)a0;
- (id)separatorColorForTransitDeparturesDataSource:(id)a0;
- (void)transitDeparturesDataSource:(id)a0 didSelectConnectionInformation:(id)a1;
- (void)transitDeparturesDataSource:(id)a0 showIncidents:(id)a1;
- (void)transitDeparturesDataSource:(id)a0 didSelectTransitLine:(id)a1 fromCell:(id)a2;
- (void)transitDeparturesDataSource:(id)a0 didSelectDepartureSequence:(id)a1 transitStationMapItem:(id)a2 transitLine:(id)a3 fromCell:(id)a4;
- (BOOL)transitDeparturesDataSource:(id)a0 canSelectDepartureSequence:(id)a1 transitStationMapItem:(id)a2 transitLine:(id)a3 fromCell:(id)a4;
- (void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)infoCardThemeChanged;
- (void)viewWillAppear:(BOOL)a0;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)a0 allowTransitLineSelection:(BOOL)a1;
- (void)viewWillLayoutSubviews;

@end
