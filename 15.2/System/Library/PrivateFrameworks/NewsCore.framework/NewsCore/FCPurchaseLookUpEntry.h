@class NSString, NSDate;

@interface FCPurchaseLookUpEntry : NSObject

@property (nonatomic) unsigned long long purchaseType;
@property (nonatomic) unsigned long long purchaseValidationState;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tagID;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSDate *lastVerificationTime;
@property (copy, nonatomic) NSDate *lastVerificationFailureTime;
@property (nonatomic) BOOL isNewsAppPurchase;
@property (copy, nonatomic) NSDate *dateOfExpiration;
@property (nonatomic) BOOL hasShownRenewalNotice;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntryID:(id)a0 dictionaryRepresentation:(id)a1;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)a0 tagID:(id)a1 purchaseID:(id)a2 lastVerificationTime:(id)a3 lastVerificationFailureTime:(id)a4 purchaseType:(unsigned long long)a5 purchaseValidationState:(unsigned long long)a6 isNewsAppPurchase:(BOOL)a7 dateOfExpiration:(id)a8 hasShownRenewalNotice:(BOOL)a9;

@end
