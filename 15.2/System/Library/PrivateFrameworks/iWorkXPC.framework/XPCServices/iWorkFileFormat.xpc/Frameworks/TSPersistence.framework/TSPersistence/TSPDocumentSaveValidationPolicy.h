@interface TSPDocumentSaveValidationPolicy : NSObject

@property (readonly, nonatomic) BOOL validateDataCRC;
@property (readonly, nonatomic) BOOL validateDataDigest;
@property (readonly, nonatomic) BOOL scanForOSLikeCorruption;
@property (readonly, nonatomic) long long corruptedDataFailToSaveMitigationPolicy;
@property (readonly, nonatomic) long long corruptedDataRemovalMitigationPolicy;

+ (id)saveValidationPolicyWithValidateDataCRC:(BOOL)a0 validateDataDigest:(BOOL)a1 scanForOSLikeCorruption:(BOOL)a2 corruptedDataFailToSaveMitigationPolicy:(long long)a3 corruptedDataRemovalMitigationPolicy:(long long)a4;

- (id)description;
- (id)initWithValidateDataCRC:(BOOL)a0 validateDataDigest:(BOOL)a1 scanForOSLikeCorruption:(BOOL)a2 corruptedDataFailToSaveMitigationPolicy:(long long)a3 corruptedDataRemovalMitigationPolicy:(long long)a4;

@end
