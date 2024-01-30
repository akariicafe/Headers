@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUFixedHeightAwareViewController, MKTransitDeparturesViewController, UIViewController, MUPlaceFooterAttributionController, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUTransitDeparturesSectionController : MUPlaceSectionController <_MKInfoCardAnalyticsDelegate, MUPlaceSectionControlling> {
    MUFixedHeightAwareViewController *_fixedHeightVC;
    MKTransitDeparturesViewController *_departuresVC;
    UIView *_sectionView;
    MUPlaceFooterAttributionController *_footerAttributionController;
}

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
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2 actionRichProviderId:(id)a3;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 moduleMetadata:(id)a5 feedbackDelegateSelector:(int)a6 actionRichProviderId:(id)a7;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 feedbackDelegateSelector:(int)a3 actionRichProviderId:(id)a4;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 moduleMetadata:(id)a3 feedbackDelegateSelector:(int)a4 actionRichProviderId:(id)a5;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)a0 resultIndex:(long long)a1 targetID:(unsigned long long)a2 transitSystem:(id)a3 transitDepartureSequence:(id)a4 transitCardCategory:(int)a5 transitIncident:(id)a6 feedbackDelegateSelector:(int)a7;
- (void)_setupDeparturesVCWithDelegate:(id)a0;
- (void)_handleAttributionTap;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 allowTransitLineSelection:(BOOL)a1 transitDelegate:(id)a2;
- (BOOL)isImpressionable;

@end
