@class NSString, NSArray, MPModelGenericObject, NSIndexPath;

@interface MPCStoreFrontLocalEquivalencyMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPModelGenericObject *overridePlayingItem;
@property (copy, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *invalidationObservers;

- (id)operationsForRequest:(id)a0;
- (id)operationsForPlayerRequest:(id)a0;
- (id)playerModelObject:(id)a0 propertySet:(id)a1 atIndexPath:(id)a2 chain:(id)a3;
- (void).cxx_destruct;
- (id)_stateDumpObject;

@end
