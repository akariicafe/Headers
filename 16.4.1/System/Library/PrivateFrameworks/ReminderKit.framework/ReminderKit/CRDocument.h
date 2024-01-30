@class NSString, NSUUID, CRVectorTimestamp, NSMutableDictionary;

@interface CRDocument : NSObject <REMReplicaClockProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CRVectorTimestamp *version;
@property (readonly, nonatomic) CRVectorTimestamp *startVersion;
@property (readonly, nonatomic) NSUUID *replica;
@property (retain, nonatomic) id rootObject;
@property (readonly, nonatomic) long long replicaClock;
@property (nonatomic) long long unserializedReplicaClock;
@property (readonly, nonatomic) NSMutableDictionary *objects;

+ (id)documentWithRootObject:(id)a0 replica:(id)a1;
+ (id)documentWithReplica:(id)a0;
+ (id)unarchiveFromData:(id)a0 replica:(id)a1;

- (void)setDocument:(id)a0;
- (void)updateObjects:(id)a0;
- (id)init;
- (id)archivedData;
- (void).cxx_destruct;
- (unsigned long long)mergeWithDocument:(id)a0;
- (id)clockElementListForReplicaUUID:(id)a0;
- (id)copyForReplica:(id)a0;
- (void)setDocumentFor:(id)a0;
- (void)walkGraph:(id /* block */)a0 root:(id)a1;
- (id)deltaSince:(id)a0;
- (id)initWithReplica:(id)a0;
- (id)initWithVersion:(id)a0 rootObject:(id)a1 replica:(id)a2;
- (id)initWithVersion:(id)a0 startVersion:(id)a1 rootObject:(id)a2 replica:(id)a3;
- (id)localObject:(id)a0;
- (unsigned long long)mergeResultForMergingWithDocument:(id)a0;
- (void)mergeTimestampWithDocument:(id)a0;
- (unsigned long long)mergeWithData:(id)a0;
- (void)realizeLocalChanges;
- (void)updateGraphDocumentPointers;
- (void)updateObjectsSet;

@end
