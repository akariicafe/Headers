@class NSArray, NSIndexSet, NSString, NSMapTable;

@interface _MSPContainerEditAddition : _MSPContainerEdit <MSPContainerEditAddition> {
    NSMapTable *_identifiersAtopByIdentifier;
}

@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) NSArray *addedImmutableObjects;
@property (readonly, nonatomic) NSIndexSet *indexesOfAddedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)identifierForObjectAtopAddedImmutableObject:(id)a0;
- (id)initWithObjects:(id)a0 indexes:(id)a1 identifiersAtop:(id)a2;
- (void)useImmutableObjectsFromMap:(id)a0 intermediateMutableObjectTransferBlock:(id /* block */)a1;

@end
