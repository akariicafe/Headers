@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MUTextPairVerticalCardView, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUPlaceVenueInfoSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    MUTextPairVerticalCardView *_contentView;
    MUPlaceSectionView *_sectionView;
}

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
- (void)_setupSectionView;

@end
