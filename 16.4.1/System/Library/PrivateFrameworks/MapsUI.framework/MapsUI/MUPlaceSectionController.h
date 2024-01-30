@class UIView, MUPlaceSectionHeaderViewModel, NSArray, GEOAPPlaceCardModule, MKMapItem, MUPlaceSectionFooterViewModel, MKUGCCallToActionViewAppearance, NSString, UIViewController, GEORevealedPlaceCardModule, MUImpressionElement;
@protocol MUPlaceSectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUPlaceSectionController : NSObject <MUPlaceSectionControlling>

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MUPlaceSectionControllerDelegate> delegate;
@property (readonly, nonatomic) int analyticsModuleType;
@property (readonly, nonatomic) MUImpressionElement *impressionElement;
@property (readonly, nonatomic) BOOL isImpressionable;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } impressionsFrame;
@property (readonly, nonatomic) GEORevealedPlaceCardModule *revealedAnalyticsModule;
@property (readonly, nonatomic) GEOAPPlaceCardModule *analyticsModule;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
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

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (id)draggableContent;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)_placeCardImpressionsMetadata;
- (void)_populateAnalyticsModule:(id)a0;
- (void)_populateRevealedAnalyticsModule:(id)a0;
- (void)captureInfoCardAction:(int)a0 eventValue:(id)a1;
- (void)captureInfoCardAction:(int)a0 eventValue:(id)a1 feedbackType:(int)a2;
- (void)captureInfoCardAction:(int)a0 eventValue:(id)a1 feedbackType:(int)a2 actionRichProviderId:(id)a3;
- (void)captureInfoCardAction:(int)a0 target:(int)a1 eventValue:(id)a2;
- (void)captureInfoCardPartnerAction:(int)a0 eventValue:(id)a1 sharedStateButtonList:(id)a2;
- (void)captureInfoCardPartnerAction:(int)a0 target:(int)a1 eventValue:(id)a2 sharedStateButtonList:(id)a3;

@end
