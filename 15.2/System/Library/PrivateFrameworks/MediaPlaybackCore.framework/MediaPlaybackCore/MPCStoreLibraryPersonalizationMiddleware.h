@class NSString, MPSectionedCollection, NSArray;

@interface MPCStoreLibraryPersonalizationMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPSectionedCollection *personalizedModelObjects;
@property (retain, nonatomic) NSArray *invalidationObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)operationsForPlayerRequest:(id)a0;
- (id)operationsForRequest:(id)a0;
- (id)playerModelObject:(id)a0 propertySet:(id)a1 atIndexPath:(id)a2 chain:(id)a3;
- (void).cxx_destruct;

@end
