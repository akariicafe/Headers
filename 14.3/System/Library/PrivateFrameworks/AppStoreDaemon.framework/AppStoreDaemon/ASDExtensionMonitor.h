@class NSArray, NSDictionary;

@interface ASDExtensionMonitor : NSObject {
    NSDictionary *_extensionAttributes;
    id _matchingContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_extensions;
    id /* block */ _updateHandler;
}

@property (readonly) NSArray *extensions;
@property (copy, nonatomic) id /* block */ updateHandler;

- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_stopMonitoringExtensions;
- (void)_startMonitoringExtensions;

@end
