@class MSPPosition, NSString, NSData, MSPVectorTimestamp;

@interface MSPPinnedPlacesReplicaRecord : NSObject <MSPOrderedReplicaRecord>

@property (readonly, nonatomic) MSPPosition *position;
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp;
@property (readonly, copy, nonatomic) NSData *contents;
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordWithContentsOfRecord:(id)a0;
+ (id)recordsByApplyingEdits:(id)a0 toArbitraryRecords:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)derivedRecordWithContents:(id)a0 contentsTimestamp:(id)a1;
- (id)derivedRecordWithPosition:(id)a0 positionTimestamp:(id)a1;
- (id)initWithContents:(id)a0 contentsTimestamp:(id)a1 position:(id)a2 positionTimestamp:(id)a3;

@end
