@class UIAlertAction;

@interface ICAlertController : UIAlertController

@property (nonatomic) BOOL didDismissWithDismissWithoutActionBlock;
@property (nonatomic) BOOL didPerformAction;
@property (copy, nonatomic) id /* block */ dismissWithoutActionBlock;
@property (retain, nonatomic) UIAlertAction *dismissAction;
@property (nonatomic) BOOL shouldDismissWhenShowingNote;
@property (nonatomic) BOOL canAppearAbovePasswordEntryView;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void).cxx_destruct;
- (void)dismissWhenPossible;

@end
