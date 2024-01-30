@class NSMutableSet;

@interface NTAWorldCitiesChangedListener : NSObject

@property (retain, nonatomic) NSMutableSet *observers;
@property (nonatomic) BOOL active;

+ (id)sharedListener;

- (void)deactivate;
- (void)removeObserver:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)_notifyPrefsChanged;
- (id)addObserverOnQueue:(id)a0 usingBlock:(id /* block */)a1;

@end
