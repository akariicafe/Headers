@class UIView, MUPlaceSectionFooterViewModel, NSArray, MUPlaceSectionHeaderViewModel, NSString, MUTextPairVerticalCardView, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol GEOAnnotatedItemList, MUInfoCardAnalyticsDelegate;

@interface MUPlaceListItemSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    MUTextPairVerticalCardView *_textVerticalCardView;
    MUPlaceSectionView *_sectionView;
    id<GEOAnnotatedItemList> _annotatedList;
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

- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_captureUserAction:(int)a0;
- (void)_performPunchout;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 annotatedList:(id)a1;
- (BOOL)isImpressionable;

@end
