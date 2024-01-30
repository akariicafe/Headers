@class NSString, INCExtensionConnection, NSMutableSet;
@protocol WFIntentDynamicResolverDataSource, INCExtensionProxy;

@interface WFIntentDynamicResolver : NSObject

@property (readonly, nonatomic) INCExtensionConnection *extensionConnection;
@property (readonly, nonatomic) id<INCExtensionProxy> extensionProxy;
@property (retain, nonatomic) NSMutableSet *activeRequests;
@property (readonly, copy, nonatomic) NSString *intentKeyPathToResolve;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, weak, nonatomic) id<WFIntentDynamicResolverDataSource> dataSource;

- (void)endSession;
- (id)intent;
- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (void)beginSessionWithCompletionBlock:(id /* block */)a0;
- (id)initWithIntentKeyPathToResolve:(id)a0 dataSource:(id)a1;
- (void)populatedSkeletonIntentWithUserInput:(id)a0 forKeyPath:(id)a1 completionBlock:(id /* block */)a2;
- (id)resolveWithUserInput:(id)a0 completionBlock:(id /* block */)a1;

@end
