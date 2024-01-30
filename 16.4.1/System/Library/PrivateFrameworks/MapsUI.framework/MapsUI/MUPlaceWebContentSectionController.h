@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUWebContentViewController, UIViewController, GEOWebContentModuleConfiguration, MKUGCCallToActionViewAppearance;
@protocol MUPlaceWebContentSectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUPlaceWebContentSectionController : MUPlaceSectionController <MUWebContentViewControllerDelegate, MUPlaceSectionControlling> {
    GEOWebContentModuleConfiguration *_webContentConfig;
    MUWebContentViewController *_webContentViewController;
    MUPlaceSectionView *_sectionView;
    BOOL _shouldRemoveWebContent;
}

@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) id<MUPlaceWebContentSectionControllerDelegate> webContentDelegate;
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
- (void)_setupWebContentViewController;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 configuration:(id)a1;
- (BOOL)isImpressionable;
- (BOOL)isWebContentViewControllerParentPlacecardLoading:(id)a0;
- (void)removeWebContentViewController:(id)a0 arguments:(id)a1;
- (void)webContentViewController:(id)a0 performHeightChangeWithBlock:(id /* block */)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)webContentViewControllerDidStopLoading:(id)a0;

@end
