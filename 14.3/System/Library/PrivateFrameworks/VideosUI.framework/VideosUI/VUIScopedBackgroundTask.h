@interface VUIScopedBackgroundTask : NSObject

@property (nonatomic) unsigned long long taskIdentifier;

- (id)init;
- (void)dealloc;
- (void)_endTask;
- (id)initWithIdentifier:(id)a0 expirationHandler:(id /* block */)a1;

@end
