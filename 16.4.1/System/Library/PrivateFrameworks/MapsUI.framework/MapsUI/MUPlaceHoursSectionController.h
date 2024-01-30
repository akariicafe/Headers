@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceHoursSectionViewConfiguration, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUPlaceHoursSectionController : MUPlaceSectionController <MUPlaceHoursSectionViewDelegate, MUPlaceSectionControlling> {
    MUPlaceSectionView *_sectionView;
    MUPlaceHoursSectionViewConfiguration *_businessHoursConfig;
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

+ (id)sectionControllerForMapItem:(id)a0;
+ (id)sectionControllerForMessagesMapItem:(id)a0;

- (void).cxx_destruct;
- (void)_setupSectionView;
- (int)analyticsModuleType;
- (void)hoursSectionView:(id)a0 didExpand:(BOOL)a1 forConfiguration:(id)a2;
- (id)initWithMapItem:(id)a0 sectionViewConfiguration:(id)a1;
- (BOOL)isImpressionable;

@end
