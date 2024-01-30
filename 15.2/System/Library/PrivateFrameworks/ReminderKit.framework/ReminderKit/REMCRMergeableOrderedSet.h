@class REMReplicaIDSource, CRDocument, NSOrderedSet, NSMutableArray;

@interface REMCRMergeableOrderedSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) CRDocument *document;
@property (readonly, nonatomic) NSMutableArray *undos;
@property (readonly, nonatomic) NSOrderedSet *orderedSet;
@property (readonly, nonatomic) unsigned long long count;

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mergedOrderedSetWithOrderedSet:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithReplicaIDSource:(id)a0 document:(id)a1;
- (void).cxx_destruct;
- (id)mutableOrderedSet;
- (BOOL)isEqual:(id)a0;
- (id)initWithReplicaIDSource:(id)a0 document:(id)a1 undos:(id)a2;
- (id)initWithReplicaIDSource:(id)a0 orderedSet:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReplicaIDSource:(id)a0 serializedData:(id)a1 error:(id *)a2;
- (unsigned long long)indexOfEqualObject:(id)a0;
- (id)serializedData;

@end
