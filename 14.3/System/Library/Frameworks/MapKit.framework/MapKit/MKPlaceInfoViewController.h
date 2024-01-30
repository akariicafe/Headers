@class UILongPressGestureRecognizer, NSString, MKPlaceSectionRowView, MKMapItem, NSMutableArray;
@protocol _MKPlaceItem, MKPlaceActionManagerProtocol;

@interface MKPlaceInfoViewController : MKPlaceSectionViewController <MKOfflineModeViewController, UIGestureRecognizerDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {
    NSMutableArray *_rows;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MKPlaceSectionRowView *_selectedRow;
}

@property (retain, nonatomic) id<_MKPlaceItem> placeItem;
@property (nonatomic) BOOL bottomHairlineHidden;
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) unsigned long long placecardOptions;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MKPlaceActionManagerProtocol> actionDelegate;
@property (nonatomic) BOOL offlineMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contact;
- (void).cxx_destruct;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)_menuDismissed:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_rowLongPressed:(id)a0;
- (void)_updateViewsAnimated:(BOOL)a0;
- (unsigned long long)actionTypeFromRowType:(unsigned long long)a0;
- (id)_addRowForType:(unsigned long long)a0 withValue:(id)a1 toViews:(id)a2;
- (void)_addContactRow:(id)a0 ofType:(unsigned long long)a1 toViews:(id)a2 defaultTitle:(id)a3;
- (BOOL)shouldShowDetails;
- (BOOL)_shouldShowSuggestAnEdit;
- (id)_createViewForInfoRow:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)_configureRow:(id)a0 ofType:(unsigned long long)a1 withValue:(id)a2;
- (void)_shareAddress:(id)a0 fromView:(id)a1;
- (void)_launchMapsDirectionsWithSource:(id)a0 destination:(id)a1 directionsMode:(id)a2;
- (id)draggableContent;
- (id)initWithPlaceItem:(id)a0;
- (void)viewDidLoad;

@end
