@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUBrowseCategoryViewController, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUBrowseCategorySectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUBrowseCategorySectionController : MUPlaceSectionController <MUBrowseCategoryViewControllerDelegate, MUPlaceSectionControlling> {
    MUBrowseCategoryViewController *_browseCategoryVC;
    MUPlaceSectionView *_sectionView;
}

@property (weak, nonatomic) id<MUBrowseCategorySectionControllerDelegate> browseCategoryDelegate;
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

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (void)_setupSectionView;
- (int)analyticsModuleType;
- (void)categoryBrowseViewController:(id)a0 didTapOnSearchCategory:(id)a1;
- (void)categoryBrowseViewControllerDidDisplayBrowseCategories:(id)a0;
- (BOOL)isImpressionable;

@end
