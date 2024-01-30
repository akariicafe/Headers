@class NSArray, MKPlaceCardActionsRowView, MKPlaceActionManager, NSString, MKPlaceSectionItemView, MKPlaceholderGridCache;
@protocol _MKPlaceViewControllerDelegate;

@interface MKPlaceCardActionsRowViewController : UIViewController <MKModuleViewControllerProtocol> {
    MKPlaceSectionItemView *_hairlineView;
    MKPlaceholderGridCache *_placeholderGridCache;
}

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (weak, nonatomic) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;
@property (readonly, nonatomic) NSArray *actionButtons;
@property (readonly, nonatomic) MKPlaceCardActionsRowView *actionsRowView;
@property (nonatomic) Class buttonBackgroundViewClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateActionsRowView;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)infoCardThemeChanged;

@end
