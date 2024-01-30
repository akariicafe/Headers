@interface VUIScopedBackgroundTask : NSObject

@property (nonatomic) unsigned long long taskIdentifier;

- (void)dealloc;
- (id)init;
- (void)_endTask;
- (id)initWithIdentifier:(id)a0 expirationHandler:(id /* block */)a1;

@end
