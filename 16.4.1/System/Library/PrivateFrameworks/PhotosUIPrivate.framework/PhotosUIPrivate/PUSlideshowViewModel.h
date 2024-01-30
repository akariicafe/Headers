@interface PUSlideshowViewModel : PUViewModel

@property (nonatomic) long long currentState;
@property (nonatomic, setter=setWantsChromeVisible:) BOOL wantsChromeVisible;

- (void)registerChangeObserver:(id)a0;
- (id)newViewModelChange;
- (void)unregisterChangeObserver:(id)a0;
- (id)currentChange;
- (void)setWantsChromeVisible:(BOOL)a0 changeReason:(long long)a1;

@end
