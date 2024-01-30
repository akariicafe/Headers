@class NSUserDefaults;

@interface GCControllerMetaDefaultsObserver : NSObject

@property (readonly, nonatomic) NSUserDefaults *metaDefaults;

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
