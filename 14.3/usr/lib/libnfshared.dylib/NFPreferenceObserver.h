@interface NFPreferenceObserver : NSObject

@property (copy) id /* block */ callback;

- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)handlePreferencesOrProfileChanged;

@end
