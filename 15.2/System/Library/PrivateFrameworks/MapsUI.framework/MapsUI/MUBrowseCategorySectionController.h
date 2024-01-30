@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MKBrowseCategoryViewController, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUBrowseCategorySectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUBrowseCategorySectionController : MUPlaceSectionController <MKBrowseCategoryViewControllerDelegate, MUPlaceSectionControlling> {
    MKBrowseCategoryViewController *_browseCategoryVC;
    MUPlaceSectionView *_sectionView;
}

@property (weak, nonatomic) id<MUBrowseCategorySectionControllerDelegate> browseCategoryDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (id)initWithMapItem:(id)a0;
- (void)categoryBrowseViewController:(id)a0 didTapOnSearchCategory:(id)a1;
- (void)categoryBrowseViewControllerDidDisplayBrowseCategories:(id)a0;
- (void).cxx_destruct;
- (int)analyticsModuleType;
- (void)_setupSectionView;

@end
