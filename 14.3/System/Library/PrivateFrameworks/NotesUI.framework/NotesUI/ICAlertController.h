@class UIAlertAction;

@interface ICAlertController : UIAlertController

@property (nonatomic) BOOL didDismissWithDismissWithoutActionBlock;
@property (nonatomic) BOOL didPerformAction;
@property (copy, nonatomic) id /* block */ dismissWithoutActionBlock;
@property (retain, nonatomic) UIAlertAction *dismissAction;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_canShowWhileLocked;
- (void)dismissWhenPossible;

@end
