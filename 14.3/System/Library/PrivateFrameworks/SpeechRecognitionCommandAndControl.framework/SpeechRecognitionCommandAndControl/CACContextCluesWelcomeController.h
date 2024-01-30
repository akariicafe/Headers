@protocol CACContextCluesWelcomeControllerDelegate;

@interface CACContextCluesWelcomeController : OBTextWelcomeController

@property (weak, nonatomic) id<CACContextCluesWelcomeControllerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
