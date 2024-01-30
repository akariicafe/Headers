@class BSServiceConnectionEndpoint;

@interface FBSDisplayLayoutMonitorConfiguration : NSObject

@property (readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (nonatomic) BOOL needsUserInteractivePriority;
@property (copy, nonatomic) id /* block */ transitionHandler;

+ (id)configurationWithEndpoint:(id)a0;
+ (id)configurationForDefaultMainDisplayMonitor;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)a0;

@end
