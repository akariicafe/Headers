@class MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MKUGCCallToActionViewAppearance, UIView, MKMapItem, UIViewController;
@protocol MUPlaceSectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUPlaceSectionController : NSObject <MUPlaceSectionControlling>

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MUPlaceSectionControllerDelegate> delegate;
@property (readonly, nonatomic) int analyticsModuleType;
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

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)draggableContent;
- (void)captureInfoCardAction:(int)a0 eventValue:(id)a1 feedbackType:(int)a2;
- (id)analyticsModule;
- (void)captureInfoCardAction:(int)a0 target:(int)a1 eventValue:(id)a2;
- (void)_populateAnalyticsModule:(id)a0;
- (void)captureInfoCardAction:(int)a0 eventValue:(id)a1;

@end
