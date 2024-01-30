@class NSArray, NSString, MKPlaceActionManager;
@protocol _MKPlaceViewControllerDelegate;

@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController <MKPlaceCardActionSectionViewDelegate, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>

@property (retain, nonatomic) NSArray *viewArray;
@property (nonatomic) BOOL haveTwoColumns;
@property (nonatomic) BOOL useSmallFonts;
@property (nonatomic) BOOL useMarginLayout;
@property (nonatomic) BOOL showTopSeparator;
@property (nonatomic) BOOL showTopButtonSeparator;
@property (nonatomic) BOOL allowRowSelection;
@property (copy, nonatomic) NSArray *actionItemArray;
@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (weak, nonatomic) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)placeCardActionSectionView:(id)a0 buttonWithActionItemPressed:(id)a1;
- (void)_setUpSectionViews;
- (id)_makePlaceActionButton;
- (void)viewDidAppear:(BOOL)a0;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;

@end
