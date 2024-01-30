@class NSMutableSet;

@interface NTAWorldCitiesChangedListener : NSObject

@property (retain, nonatomic) NSMutableSet *observers;
@property (nonatomic) BOOL active;

+ (id)sharedListener;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (id)addObserverOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)_notifyPrefsChanged;

@end
