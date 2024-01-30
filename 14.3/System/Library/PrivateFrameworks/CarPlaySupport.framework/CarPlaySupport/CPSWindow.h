@class NSHashTable;

@interface CPSWindow : UIWindow

@property (retain, nonatomic) NSHashTable *observers;

- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (BOOL)_isKeyWindowForDeferral;
- (void)addEventObserver:(id)a0;
- (void)removeEventObserver:(id)a0;

@end
