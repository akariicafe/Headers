@class UINavigationController, NSArray, NSString, CACContextCluesWelcomeController;
@protocol CACContextCluesDelegate;

@interface CACContextCluesViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UISheetPresentationControllerDelegate, UIPresentationControllerDelegatePrivate, CACContextCluesWelcomeControllerDelegate, CACViewController>

@property (retain, nonatomic) CACContextCluesWelcomeController *contextCluesController;
@property (retain, nonatomic) UINavigationController *presentingNavigationController;
@property (weak, nonatomic) id<CACContextCluesDelegate> delegate;
@property (retain, nonatomic) NSArray *commands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)doneButtonPressed;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)contextCluesDoneButtonPressed:(id)a0;
- (id)initWithCommands:(id)a0;

@end
