@protocol PKProgressAlertControllerDelegate;

@interface PKProgressAlertController : UIAlertController

@property (weak, nonatomic) id<PKProgressAlertControllerDelegate> delegate;
@property (nonatomic) double progress;

+ (id)newProgressAlertControllerWithTitle:(id)a0 cancel:(id)a1;

- (BOOL)_canShowWhileLocked;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;

@end
