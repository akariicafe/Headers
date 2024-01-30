@class PLPlatterDiscoveryView, NSString;

@interface CSDiscoveryItemViewController : UIViewController <CSListItemHosting>

@property (retain, nonatomic) PLPlatterDiscoveryView *platterDiscoveryView;
@property (copy, nonatomic) id /* block */ firstDidAppearCompletion;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic, getter=isScreenOn) BOOL screenOn;
@property (nonatomic, getter=isListAppeared) BOOL listAppeared;
@property (nonatomic) double containerCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)_callFirstDidAppearCompletionIfNecessary;
- (id)initWithPlatterDiscoveryView:(id)a0 firstDidAppearCompletion:(id /* block */)a1;

@end
