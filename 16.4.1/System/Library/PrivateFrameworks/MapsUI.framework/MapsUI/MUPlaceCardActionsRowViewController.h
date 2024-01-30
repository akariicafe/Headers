@class NSArray, MUPlaceCardActionsRowView, MKPlaceActionManager;
@protocol MUPlaceCardActionsRowViewMenuProvider;

@interface MUPlaceCardActionsRowViewController : UIViewController

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (weak, nonatomic) id<MUPlaceCardActionsRowViewMenuProvider> menuProvider;
@property (readonly, nonatomic) NSArray *actionButtons;
@property (readonly, nonatomic) MUPlaceCardActionsRowView *actionsRowView;

- (BOOL)_canShowWhileLocked;
- (id)initWithStyle:(unsigned long long)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateActionsRowView;

@end
