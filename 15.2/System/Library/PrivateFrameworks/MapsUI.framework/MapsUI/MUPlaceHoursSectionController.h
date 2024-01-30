@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, NSArray, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUPlaceHoursSectionController : MUPlaceSectionController <MUPlaceHoursSectionViewDelegate, MUPlaceSectionControlling> {
    MUPlaceSectionView *_sectionView;
    NSArray *_businessHoursConfig;
}

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

+ (id)sectionControllerForMapItem:(id)a0 isInMapsApp:(BOOL)a1;
+ (id)sectionControllerForMessagesMapItem:(id)a0;

- (void).cxx_destruct;
- (int)analyticsModuleType;
- (void)_setupSectionView;
- (void)hoursSectionView:(id)a0 didExpand:(BOOL)a1 atIndex:(unsigned long long)a2;
- (id)initWithMapItem:(id)a0 businessHoursConfiguration:(id)a1;

@end
