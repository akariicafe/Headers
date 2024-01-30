@class NSArray, NSData, NSString;

@interface SPRTransactionData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *vasResponses;
@property (readonly, copy, nonatomic) NSData *cardHolderData;
@property (readonly, copy, nonatomic) NSString *network;
@property (readonly, nonatomic) unsigned char outcomeStatus;
@property (readonly, nonatomic) unsigned char cvmType;
@property (readonly, copy, nonatomic) NSData *cvmResult;
@property (readonly, copy, nonatomic) NSData *merchantCategoryCode;
@property (readonly, nonatomic) BOOL pinRequired;
@property (readonly, copy, nonatomic) NSData *kernelIdentityKeyAttestation;
@property (readonly, copy, nonatomic) NSData *ecdsaCertificate;
@property (readonly, copy, nonatomic) NSData *transactionResultData;
@property (readonly, copy, nonatomic) NSString *kekId;
@property (readonly, copy, nonatomic) NSString *pinKekId;
@property (readonly, nonatomic) BOOL isPinSupported;
@property (readonly, copy, nonatomic) NSData *languagePreference;
@property (readonly, copy, nonatomic) NSString *transactionId;
@property (readonly, nonatomic) long long readError;
@property (readonly, nonatomic) unsigned char payAppletFinalStatus;
@property (readonly, copy) NSData *fingerprint;
@property (readonly, nonatomic) BOOL isPINBypassAllowed;
@property (readonly, nonatomic) BOOL forFallback;
@property (readonly, copy, nonatomic) NSString *fallbackAmount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVasResponses:(id)a0 cardHolderData:(id)a1 network:(id)a2 outcomeStatus:(unsigned char)a3 cvmType:(unsigned char)a4 cvmResult:(id)a5 merchantCategoryCode:(id)a6 pinRequired:(BOOL)a7 kernelIdentityKeyAttestation:(id)a8 ecdsaCertificate:(id)a9 transactionResultData:(id)a10 kekId:(id)a11 pinKekId:(id)a12 isPinSupported:(BOOL)a13 languagePreference:(id)a14 transactionId:(id)a15 readError:(long long)a16 payAppletFinalStatus:(unsigned char)a17;
- (id)initWithVasResponses:(id)a0 cardHolderData:(id)a1 network:(id)a2 outcomeStatus:(unsigned char)a3 cvmType:(unsigned char)a4 cvmResult:(id)a5 merchantCategoryCode:(id)a6 pinRequired:(BOOL)a7 kernelIdentityKeyAttestation:(id)a8 ecdsaCertificate:(id)a9 transactionResultData:(id)a10 kekId:(id)a11 pinKekId:(id)a12 isPinSupported:(BOOL)a13 languagePreference:(id)a14 transactionId:(id)a15 readError:(long long)a16 payAppletFinalStatus:(unsigned char)a17 isPINBypassAllowed:(BOOL)a18 forFallback:(BOOL)a19 fallbackAmount:(id)a20;

@end
