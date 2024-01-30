@class NSString, NSUserDefaults, NSMapTable;

@interface BLSHDefaultsObserver : NSObject <BSInvalidatable> {
    NSUserDefaults *_observedDefaults;
    NSMapTable *_handlers;
}

@property BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addHandlerForKey:(id)a0 attribute:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
