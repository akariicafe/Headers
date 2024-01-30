@interface PUSlideshowViewModel : PUViewModel

@property (nonatomic) long long currentState;
@property (nonatomic, setter=setWantsChromeVisible:) BOOL wantsChromeVisible;

- (id)newViewModelChange;
- (void)unregisterChangeObserver:(id)a0;
- (id)currentChange;
- (void)registerChangeObserver:(id)a0;
- (void)setWantsChromeVisible:(BOOL)a0 changeReason:(long long)a1;

@end
