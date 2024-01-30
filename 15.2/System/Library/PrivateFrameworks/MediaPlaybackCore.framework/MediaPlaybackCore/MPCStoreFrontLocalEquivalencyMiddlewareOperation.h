@class NSIndexPath, NSString, NSArray, MPCPlayerRequest, NSError, MPModelGenericObject, NSMapTable, MPCStoreFrontLocalEquivalencyMiddleware;

@interface MPCStoreFrontLocalEquivalencyMiddlewareOperation : MPAsyncOperation <MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding, MPMiddlewareAutomaticDependencyOperation>

@property (readonly, nonatomic) MPModelGenericObject *overridePlayingItem;
@property (readonly, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPCStoreFrontLocalEquivalencyMiddleware *middleware;
@property (retain, nonatomic) MPCPlayerRequest *playerRequest;
@property (readonly, nonatomic) NSArray *inputProtocols;
@property (readonly, nonatomic) NSArray *outputProtocols;
@property (retain, nonatomic) NSMapTable *inputOperations;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithMiddleware:(id)a0 playerRequest:(id)a1;

@end
