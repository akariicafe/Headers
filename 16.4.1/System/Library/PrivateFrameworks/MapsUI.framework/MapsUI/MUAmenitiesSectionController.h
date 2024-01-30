@class UIView, MUPlaceSectionFooterViewModel, NSArray, MUPlaceSectionHeaderViewModel, NSString, GEOBusinessInfoModuleConfiguration, MUAmenityListSectionView, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUAmenitiesSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    MUPlaceSectionView *_sectionView;
    GEOBusinessInfoModuleConfiguration *_moduleConfig;
    MUAmenityListSectionView *_amenitySectionView;
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
- (id)infoCardChildUnactionableUIElements;
- (void)_setupAmenitiyRows;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 moduleConiguration:(id)a1;
- (BOOL)isImpressionable;

@end
