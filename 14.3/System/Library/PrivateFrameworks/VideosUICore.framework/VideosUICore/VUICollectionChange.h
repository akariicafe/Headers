@class NSIndexSet, VUICollectionChangeSet;

@interface VUICollectionChange : NSObject

@property (readonly, nonatomic) unsigned long long changeKind;
@property (readonly, copy, nonatomic) NSIndexSet *sourceIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *destinationIndexes;
@property (retain, nonatomic) VUICollectionChangeSet *updateChangeSet;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithChangeKind:(unsigned long long)a0 sourceIndexes:(id)a1 destinationIndexes:(id)a2;

@end
