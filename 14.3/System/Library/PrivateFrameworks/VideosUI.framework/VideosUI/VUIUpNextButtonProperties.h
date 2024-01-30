@class VUIUpNextStateView, NSString, UIView;
@protocol VUIUpNextButtonProtocol;

@interface VUIUpNextButtonProperties : NSObject

@property (readonly, nonatomic) VUIUpNextStateView *addedStateView;
@property (readonly, nonatomic) VUIUpNextStateView *removedStateView;
@property (weak, nonatomic) UIView<VUIUpNextButtonProtocol> *delegate;
@property (retain, nonatomic) NSString *canonicalID;
@property (nonatomic) BOOL isWatchListed;
@property (nonatomic) BOOL dismissOnSelect;
@property (nonatomic) BOOL confirmationShouldWaitCompletion;

+ (id)configureWithElement:(id)a0 existingButton:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)callAPIAndToggleUpNextState;
- (void)updateButtonContentView;
- (void)_errorInUpdatingState:(id)a0;
- (void)_toggleUpNextState;
- (void)setupNotificationObserver;

@end
