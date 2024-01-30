@class GKDiscoveryBonjour, NSMutableArray;

@interface GKDiscoveryBonjourResolveContainer : NSObject

@property (retain, nonatomic) NSMutableArray *serviceRefList;
@property (nonatomic) GKDiscoveryBonjour *context;
@property (copy, nonatomic) id /* block */ resolveCompletionHandler;

- (id)init;
- (void)dealloc;

@end
