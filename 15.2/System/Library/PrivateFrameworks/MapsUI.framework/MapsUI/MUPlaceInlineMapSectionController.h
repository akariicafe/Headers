@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MKPlaceInlineMapViewController, UIViewController, CLLocation, MKPlacePoisInlineMapViewController, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUPlaceInlineMapSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    MKPlaceInlineMapViewController *_inlineMapViewController;
    MKPlacePoisInlineMapViewController *_poiInlineMapViewController;
    MUPlaceSectionView *_sectionView;
}

@property (retain, nonatomic) CLLocation *location;
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
- (int)analyticsModuleType;
- (void)updateWithMapItem:(id)a0;
- (void)_setupInlineMap;

@end
