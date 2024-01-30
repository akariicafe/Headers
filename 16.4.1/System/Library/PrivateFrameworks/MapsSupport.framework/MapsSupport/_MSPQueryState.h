@class NSArray;

@interface _MSPQueryState : NSObject

@property (readonly) NSArray *contents;
@property (readonly) NSArray *identifiers;

- (void).cxx_destruct;
- (id)initWithContainerContents:(id)a0;
- (id)initWithContents:(id)a0 identifiers:(id)a1;
- (id)stateByDeletingObjectAtIndex:(unsigned long long)a0;
- (id)stateByDeletingObjectsAtIndexes:(id)a0;
- (id)stateByInvokingPreprocessingBlock:(id /* block */)a0 mappingBlock:(id /* block */)a1;
- (id)stateByMovingObjectAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;

@end
