@interface NFPreferenceObserver : NSObject

@property (copy) id /* block */ callback;

- (void)start:(id /* block */)a0;
- (void)handlePreferencesOrProfileChanged;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;

@end
