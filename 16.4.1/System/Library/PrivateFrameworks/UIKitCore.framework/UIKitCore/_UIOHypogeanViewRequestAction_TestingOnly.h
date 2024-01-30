@class _UIOHypogeanViewRequestConfiguration;

@interface _UIOHypogeanViewRequestAction_TestingOnly : _UIOAction

@property (readonly, nonatomic) _UIOHypogeanViewRequestConfiguration *configuration;

+ (id)_overlay_viewRegistry;

- (BOOL)isPermitted;
- (id)initWithConfiguration:(id)a0 responseHandler:(id /* block */)a1;
- (void)performActionFromConnection:(id)a0;

@end
