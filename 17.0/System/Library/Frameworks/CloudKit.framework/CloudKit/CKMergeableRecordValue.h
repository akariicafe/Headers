@class NSArray, NSString, CKMergeableValueID, NSSet, CKMultiValueMergeableDeltaRegister, CKDistributedTimestampStateVector, CKMultiValueMergeableDeltaRegisterState;

@interface CKMergeableRecordValue : NSObject <CKRecordValue, CKPropertiesDescription, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) CKMergeableValueID *valueID;
@property (nonatomic) BOOL isValueIDKnownToServer;
@property (copy, nonatomic) CKDistributedTimestampStateVector *lastKnownServerTimestampVector;
@property (copy, nonatomic) NSSet *deltasToSave;
@property (copy, nonatomic) NSSet *savedDeltaMetadatas;
@property (copy, nonatomic) NSSet *unmergedDeltas;
@property (readonly, nonatomic) CKMultiValueMergeableDeltaRegister *multiValueRegister;
@property (retain, nonatomic) CKMultiValueMergeableDeltaRegisterState *multiValueRegisterState;
@property (nonatomic) long long encryptMetadataTernary;
@property (copy, nonatomic) NSSet *serverDeltaMetadatas;
@property (copy, nonatomic) NSArray *pendingReplacementRequests;
@property (nonatomic) BOOL inlineReplacementEnabled;
@property (nonatomic) BOOL encryptMetadata;
@property unsigned long long enabledFaultErrors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMergeDeltas:(id)a0;
- (BOOL)addDeltasToSaveFromMergeable:(id)a0 container:(id)a1 error:(id *)a2;
- (BOOL)addDeltasToSaveFromMergeable:(id)a0 error:(id *)a1;
- (void)addServerDeltaMetadatas:(id)a0;
- (void)addUnmergedDeltas:(id)a0;
- (id)deliverableDeltasWithCurrentStateVector:(id)a0 usingDeliveryRequirements:(unsigned long long)a1;
- (void)didSaveDeltas:(id)a0 replacementRequests:(id)a1;
- (BOOL)hasAssetBackedDeltas;
- (id)initWithValueID:(id)a0;
- (BOOL)mergeIntoMergeable:(id)a0 error:(id *)a1;
- (void)mergeLastKnownServerTimestampVector:(id)a0;
- (void)mergeLastKnownServerTimestampVectorFromDeltas:(id)a0;
- (BOOL)mergeRecordValue:(id)a0 error:(id *)a1;
- (void)sanityCheckDeltas:(id)a0;

@end
