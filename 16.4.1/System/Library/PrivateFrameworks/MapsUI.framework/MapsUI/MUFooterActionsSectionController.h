@class UIView, MUPlaceSectionFooterViewModel, NSArray, MUPlaceSectionHeaderViewModel, NSString, MUActionGroupSectionView, MUPlaceActionManager, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUFooterActionsSectionController : NSObject <MUPlaceSectionControlling> {
    MUPlaceSectionView *_sectionView;
    MUPlaceActionManager *_actionManager;
    MUActionGroupSectionView *_footerView;
    NSArray *_footerActions;
}

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

- (void)reloadData;
- (id)initWithActionManager:(id)a0;
- (void).cxx_destruct;
- (id)draggableContent;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)analyticsModule;
- (void)_setupFooterView;
- (int)analyticsModuleType;
- (id)revealedAnalyticsModule;

@end
