@class NSString, NSMapTable, NSMutableOrderedSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CLSFaultProcessorDelegate, OS_dispatch_group;

@interface CLSFaultProcessor : NSObject <CLSQuery> {
    NSMutableArray *_results;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSMapTable *_objects;
    NSMapTable *_relations;
    NSMapTable *_objectsIdsByParentID;
    NSMutableOrderedSet *_rootObjectIDs;
}

@property (readonly, weak, nonatomic) id<CLSFaultProcessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rootClasses;

- (void)enumerate:(id /* block */)a0;
- (void)_addObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)waitUntilDone:(double)a0;
- (id)initWithDelegate:(id)a0;
- (id)_childParentRelationForObject:(id)a0;
- (void)_descendIntoObject:(id)a0 idsToProcess:(id)a1 enumerationBlock:(id /* block */)a2;
- (void)_faultObjectsBatch:(id)a0;
- (void)_faultRelation:(id)a0 fromObject:(id)a1;
- (void)_inGroup:(id /* block */)a0;
- (void)_insertRootObject:(id)a0;
- (void)_insertRootObjectID:(id)a0 withChildren:(id)a1;
- (BOOL)_isRootObject:(id)a0;
- (BOOL)_isRootObject:(id)a0 withRelation:(id)a1;
- (oneway void)clientRemote_deliverObject:(id)a0;
- (oneway void)clientRemote_finishWithOffset:(unsigned long long)a0 error:(id)a1;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_itemChanged:(unsigned long long)a0;
- (void)completionNotify:(id /* block */)a0;
- (void)faultObject:(id)a0;
- (void)faultObjects:(id)a0;

@end
