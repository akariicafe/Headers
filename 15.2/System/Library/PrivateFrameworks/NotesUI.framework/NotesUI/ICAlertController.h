@class UIAlertAction;

@interface ICAlertController : UIAlertController

@property (nonatomic) BOOL didDismissWithDismissWithoutActionBlock;
@property (nonatomic) BOOL didPerformAction;
@property (copy, nonatomic) id /* block */ dismissWithoutActionBlock;
@property (retain, nonatomic) UIAlertAction *dismissAction;
@property (nonatomic) BOOL shouldDismissWhenShowingNote;

- (void)commonInit;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dismissWhenPossible;

@end
