@class MUPlaceSectionHeaderViewModel, MUPlaceDataAvailability, UIViewController, MUPlaceFooterAttributionController, UIView, MUDisclosureActionRowView, NSString, GEOPlaceDetailsModuleConfiguration, MUPlaceHoursSectionViewConfiguration, MKUGCCallToActionViewAppearance, NSArray, MUPlaceInfoSectionView, MUPlaceSectionFooterViewModel;
@protocol MKPlaceActionManagerProtocol, MUPlaceInfoSectionControllerDelegate, _MKPlaceItem, MUUserInformationProvider, MUInfoCardAnalyticsDelegate;

@interface MUPlaceInfoSectionController : MUPlaceSectionController <MUPlaceHoursSectionViewDelegate, MUPlaceSectionControlling> {
    id<_MKPlaceItem> _placeItem;
    id<MKPlaceActionManagerProtocol> _actionDelegate;
    MUPlaceDataAvailability *_availability;
    GEOPlaceDetailsModuleConfiguration *_moduleConfig;
    MUPlaceInfoSectionView *_sectionStackView;
    NSArray *_sectionViews;
    MUPlaceFooterAttributionController *_footerAttributionController;
    UIView *_hoursContentView;
    MUDisclosureActionRowView *_rapStatusContentView;
    BOOL _needsUpdate;
}

@property (weak, nonatomic) id<MUPlaceInfoSectionControllerDelegate> placeInfoDelegate;
@property (weak, nonatomic) id<MUUserInformationProvider> userInfoProvider;
@property (readonly, nonatomic) MUPlaceHoursSectionViewConfiguration *hoursConfig;
@property (nonatomic) unsigned long long placeNumberOfReportsInReview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (void).cxx_destruct;
- (id)draggableContent;
- (void)_performActionItem:(id)a0 withOptions:(id)a1;
- (void)refreshContents;
- (int)_attributionStyle;
- (void)_buildSections;
- (id)_createAddressItem;
- (void)_handleFactoidTap:(id)a0 withReference:(id)a1;
- (id)_loadHoursContentViewIfNeeded;
- (id)_loadPlaceInfoContentIfNeeded;
- (id)_loadRAPStatusViewIfNeeded;
- (void)_populateRevealedAnalyticsModule:(id)a0;
- (void)_rapEditPlaceDetailsButtonTapped;
- (id)_rapEditPlaceDetailsMenu;
- (void)_refineMapItemForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_tappedAddressItem;
- (void)_tappedContactOfType:(long long)a0 withLabeledValue:(id)a1;
- (void)_tappedMessageType;
- (void)_tappedViewRAPReport;
- (int)analyticsModuleType;
- (void)hoursSectionView:(id)a0 didExpand:(BOOL)a1 forConfiguration:(id)a2;
- (id)initWithPlaceItem:(id)a0 moduleConfiguration:(id)a1 availability:(id)a2 actionDelegate:(id)a3 hoursConfiguration:(id)a4;
- (BOOL)isImpressionable;
- (id)labeledValuesForContactValues:(id)a0 type:(long long)a1;

@end
