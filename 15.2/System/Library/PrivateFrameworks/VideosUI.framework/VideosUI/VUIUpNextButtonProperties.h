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
@property (nonatomic) BOOL hasUpdated;

- (void).cxx_destruct;
- (void)removeNotificationObserver;
- (id)init;
- (void)dealloc;
- (void)callAPIAndToggleUpNextState;
- (void)_errorInUpdatingState:(id)a0;
- (void)updateButtonContentView;
- (void)_toggleUpNextState;
- (void)setupNotificationObserver;

@end
