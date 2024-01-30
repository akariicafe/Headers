@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, _MKPlaceActionButtonController, MUPlaceHeaderButtonsSectionControllerConfiguration, UIViewController, MUHeaderButtonsSectionController, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate, MUPlaceHeaderButtonsSectionControllerDelegate, _MKPlaceItem;

@interface MUPlaceHeaderButtonsSectionController : MUPlaceSectionController <MKETAProviderObserver, MUHeaderButtonsSectionControllerDelegate, MUPlaceSectionControlling> {
    MUHeaderButtonsSectionController *_headerSectionController;
    MUPlaceHeaderButtonsSectionControllerConfiguration *_configuration;
}

@property (weak, nonatomic) id<MUPlaceHeaderButtonsSectionControllerDelegate> headerDelegate;
@property (nonatomic) unsigned long long primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property (retain, nonatomic) id<_MKPlaceItem> placeItem;
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

@end
