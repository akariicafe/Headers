@class NSString, NSData, MSPVectorTimestamp, NSDate;

@interface MSPHistoryReplicaSimpleRecord : NSObject <MSPHistoryReplicaRecord>

@property (readonly, copy, nonatomic) NSDate *modificationDate;
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
- (id)derivedRecordWithModificationDate:(id)a0;
- (id)initWithContents:(id)a0 contentsTimestamp:(id)a1 modificationDate:(id)a2;

@end
