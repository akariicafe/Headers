@class NSString, NSArray, NSData, PKPaymentApplication, NSDate, PKCurrencyAmount;

@interface PKRemotePaymentInstrument : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *passIdentifier;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSData *manifestHash;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *issuerCountryCode;
@property (retain, nonatomic) NSArray *paymentApplications;
@property (retain, nonatomic) PKPaymentApplication *primaryPaymentApplication;
@property (retain, nonatomic) NSDate *ingestedDate;
@property (nonatomic) BOOL supportsAutomaticSelection;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentAccountBalance;
@property (nonatomic) BOOL hasAssociatedPeerPaymentAccount;
@property (nonatomic) unsigned long long peerPaymentAccountState;
@property (retain, nonatomic) NSArray *associatedWebDomains;

+ (id)sortDescriptorForDefaultPaymentInstrument:(id)a0 paymentSupportedQuery:(id)a1;
+ (id)thumbnailCachePathForManifestHash:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)remotePaymentInstrumentWithProtobuf:(id)a0;

- (id)protobuf;
- (void)encodeWithCoder:(id)a0;
- (id)sortedPaymentApplications:(id)a0 ascending:(BOOL)a1;
- (id)initWithPaymentPass:(id)a0;
- (id)description;
- (BOOL)isEqualToRemotePaymentInstrument:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
