@class REMReplicaIDSource, CRDocument, NSOrderedSet, NSMutableArray;

@interface REMCRMergeableOrderedSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) CRDocument *document;
@property (readonly, nonatomic) NSMutableArray *undos;
@property (readonly, nonatomic) NSOrderedSet *orderedSet;
@property (readonly, nonatomic) unsigned long long count;

- (id)initWithReplicaIDSource:(id)a0 document:(id)a1 undos:(id)a2;
- (id)initWithReplicaIDSource:(id)a0 serializedData:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithReplicaIDSource:(id)a0 document:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableOrderedSet;
- (id)mergedOrderedSetWithOrderedSet:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)initWithReplicaIDSource:(id)a0 orderedSet:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)indexOfEqualObject:(id)a0;
- (id)serializedData;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
