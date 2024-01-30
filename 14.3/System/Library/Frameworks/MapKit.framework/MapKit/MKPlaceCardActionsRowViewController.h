@class NSArray, NSString, MKPlaceActionManager, MKPlaceSectionItemView, MKPlaceCardActionsRowView, MKPlaceholderGridCache;
@protocol _MKPlaceViewControllerDelegate;

@interface MKPlaceCardActionsRowViewController : UIViewController <MKModuleViewControllerProtocol> {
    MKPlaceSectionItemView *_hairlineView;
    MKPlaceCardActionsRowView *_actionsRowView;
    MKPlaceholderGridCache *_placeholderGridCache;
}

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (weak, nonatomic) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)infoCardThemeChanged;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
