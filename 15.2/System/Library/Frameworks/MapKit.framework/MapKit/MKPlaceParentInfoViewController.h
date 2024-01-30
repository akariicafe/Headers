@class UILabel, NSString, UIButton, UIStackView, NSLayoutConstraint, MKMapItem, MKPlaceSectionRowView;
@protocol MKPlaceParentInfoViewControllerDelegate, _MKInfoCardAnalyticsDelegate;

@interface MKPlaceParentInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, MKStackingViewControllerFixedHeightAware> {
    MKPlaceSectionRowView *_sectionRow;
    UILabel *_titleLabel;
    UIButton *_nameButton;
    UIStackView *_stackView;
}

@property (retain, nonatomic) NSLayoutConstraint *topToBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *baselineToBottomConstraint;
@property (retain, nonatomic) MKMapItem *childMapItem;
@property (retain, nonatomic) MKMapItem *parentMapItem;
@property (weak, nonatomic) id<MKPlaceParentInfoViewControllerDelegate> delegate;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL resizableViewsDisabled;

+ (id)parentInfoWithPlaceItem:(id)a0;

- (void)viewDidLoad;
- (void)_contentSizeDidChange;
- (BOOL)_canShowWhileLocked;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)showData;
- (id)parentIdentifiers;
- (void)setupData;
- (id)initWithChild:(id)a0;
- (void)fetchParentItem;
- (void)_buttonTapped:(id)a0;
- (void)updateLabelsColor;
- (id)venueTitleForMapItem:(id)a0;
- (id)font;
- (void)infoCardThemeChanged;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;

@end
