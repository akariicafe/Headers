@class NSArray, NSString;

@interface MSPCollectionItemReplica : MSPOrderedReplica <MSPContainerStateSnapshot, NSCopying>

@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemReplicaWithData:(id)a0;

@end
