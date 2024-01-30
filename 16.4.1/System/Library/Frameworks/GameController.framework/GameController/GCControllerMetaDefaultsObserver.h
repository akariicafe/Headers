@class NSUserDefaults;

@interface GCControllerMetaDefaultsObserver : NSObject

@property (readonly, nonatomic) NSUserDefaults *metaDefaults;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;

@end
