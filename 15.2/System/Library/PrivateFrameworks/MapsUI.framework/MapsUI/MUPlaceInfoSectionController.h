@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MUPlaceInfoSectionView, MUPlaceDataAvailability, UIViewController, GEOPlaceDetailsModuleConfiguration, MUPlaceFooterAttributionController, MKUGCCallToActionViewAppearance;
@protocol MKPlaceActionManagerProtocol, _MKPlaceItem, MUPlaceInfoSectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUPlaceInfoSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    id<_MKPlaceItem> _placeItem;
    id<MKPlaceActionManagerProtocol> _actionDelegate;
    MUPlaceDataAvailability *_availability;
    GEOPlaceDetailsModuleConfiguration *_moduleConfig;
    MUPlaceInfoSectionView *_sectionStackView;
    MUPlaceFooterAttributionController *_footerAttributionController;
}

@property (weak, nonatomic) id<MUPlaceInfoSectionControllerDelegate> placeInfoDelegate;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)draggableContent;
- (int)analyticsModuleType;
- (id)initWithPlaceItem:(id)a0 moduleConfiguration:(id)a1 availability:(id)a2 actionDelegate:(id)a3;
- (void)_setupRowItems;
- (void)_handleFactoidTap:(id)a0 withReference:(id)a1;
- (id)labeledValuesForContactValues:(id)a0 type:(long long)a1;
- (void)_tappedMessageType;
- (id)_createAddressItem;
- (void)_tappedAddressItem;
- (void)_refineMapItemForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_tappedContactOfType:(long long)a0 withLabeledValue:(id)a1;
- (void)_performActionItem:(id)a0 withOptions:(id)a1;
- (void)_tappedReportAnIssueWithSourceView:(id)a0;
- (void)_tappedAddToMapWithSourceView:(id)a0;

@end
