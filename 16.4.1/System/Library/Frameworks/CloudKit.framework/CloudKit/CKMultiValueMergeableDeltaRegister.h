@class NSMutableDictionary, NSArray, NSData, NSString, CKMultiValueMergeableDeltaRegisterState;

@interface CKMultiValueMergeableDeltaRegister : CKMultiValueRegister <CKVersionedMergeable>

@property (readonly, nonatomic) NSMutableDictionary *timestampToContents;
@property (readonly, nonatomic) NSData *salt;
@property (readonly, copy, nonatomic) CKMultiValueMergeableDeltaRegisterState *persistedState;
@property (copy, nonatomic) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)installationIdentifierWithSalt:(id)a0;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (void)setContents:(id)a0;
- (BOOL)checkElementType:(id)a0 error:(id *)a1;
- (unsigned long long)deltaDeliveryRequirements;
- (id)initWithIdentifier:(id)a0 vector:(id)a1 contents:(id)a2 error:(id *)a3;
- (id)initWithPersistedState:(id)a0 contents:(id)a1 error:(id *)a2;
- (id)installationIdentifier;
- (BOOL)mergeDeltas:(id)a0 error:(id *)a1;
- (id)mergeableDeltasForMetadata:(id)a0 error:(id *)a1;
- (unsigned long long)modifierLimitForInstallationIdentifierCheck;
- (id)siteIdentifier;
- (id)stateVector;

@end
