@class NSUUID, CRVectorTimestamp, NSMutableDictionary;

@interface CRDocument : NSObject

@property (readonly, nonatomic) CRVectorTimestamp *version;
@property (readonly, nonatomic) CRVectorTimestamp *startVersion;
@property (readonly, nonatomic) NSUUID *replica;
@property (retain, nonatomic) id rootObject;
@property (readonly, nonatomic) long long replicaClock;
@property (nonatomic) long long unserializedReplicaClock;
@property (readonly, nonatomic) NSMutableDictionary *objects;

+ (id)documentWithReplica:(id)a0;
+ (id)documentWithRootObject:(id)a0 replica:(id)a1;
+ (id)unarchiveFromData:(id)a0 replica:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVersion:(id)a0 startVersion:(id)a1 rootObject:(id)a2 replica:(id)a3;
- (unsigned long long)mergeResultForMergingWithDocument:(id)a0;
- (void)mergeTimestampWithDocument:(id)a0;
- (id)initWithVersion:(id)a0 rootObject:(id)a1 replica:(id)a2;
- (void)updateGraphDocumentPointers;
- (void)updateObjectsSet;
- (void)walkGraph:(id /* block */)a0 root:(id)a1;
- (unsigned long long)mergeWithData:(id)a0;
- (id)deltaSince:(id)a0;
- (id)description;
- (id)initWithReplica:(id)a0;
- (void)realizeLocalChanges;
- (id)copyForReplica:(id)a0;
- (unsigned long long)mergeWithDocument:(id)a0;
- (id)archivedData;
- (void)setDocument:(id)a0;
- (void)updateObjects:(id)a0;
- (void)setDocumentFor:(id)a0;
- (id)localObject:(id)a0;

@end
