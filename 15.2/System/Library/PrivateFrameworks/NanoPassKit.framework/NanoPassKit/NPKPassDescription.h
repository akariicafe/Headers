@class NSData, NSString, NSDate, NSArray, NSSet, PKNFCPayload, PKTransitAppletState, NSDecimalNumber, PKColor, PKPaymentApplication, NSNumber, PKImage;

@interface NPKPassDescription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *logoImageEncoded;
@property (retain, nonatomic) NSData *backgroundImageEncoded;
@property (nonatomic) BOOL lazyLoadEncodedImages;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSData *manifestHash;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSDate *relevantDate;
@property (retain, nonatomic) NSDate *ingestionDate;
@property (retain, nonatomic) PKNFCPayload *nfcPayload;
@property (nonatomic) BOOL hasStoredValue;
@property (retain, nonatomic) NSData *completeHash;
@property (nonatomic) unsigned long long settings;
@property (retain, nonatomic) NSString *logoText;
@property (retain, nonatomic) PKImage *logoImage;
@property (retain, nonatomic) PKColor *backgroundColor;
@property (retain, nonatomic) PKColor *foregroundColor;
@property (retain, nonatomic) PKColor *labelColor;
@property (retain, nonatomic) PKImage *backgroundImage;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSSet *devicePaymentApplications;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryContactlessPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryInAppPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *preferredPaymentApplication;
@property (nonatomic) long long effectivePaymentApplicationState;
@property (nonatomic, getter=isPrivateLabel) BOOL privateLabel;
@property (nonatomic, getter=isCobranded) BOOL cobranded;
@property (nonatomic) BOOL deletePending;
@property (nonatomic) BOOL hasUserSelectableContactlessPaymentApplications;
@property (retain, nonatomic) NSString *issuerCountryCode;
@property (readonly, nonatomic) long long effectiveContactlessPaymentApplicationState;
@property (retain, nonatomic) NSArray *availableActions;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) PKTransitAppletState *transitAppletState;
@property (retain, nonatomic) NSArray *frontFieldBuckets;
@property (retain, nonatomic) NSArray *backFieldBuckets;
@property (retain, nonatomic) NSDecimalNumber *lastAddValueAmount;
@property (retain, nonatomic) NSDate *pendingAddValueDate;
@property (nonatomic) BOOL hasAssociatedPeerPaymentAccount;
@property (retain, nonatomic) NSSet *subcredentials;
@property (nonatomic) unsigned long long expressPassTypesMask;

+ (void)setCachingEnabled:(BOOL)a0;
+ (BOOL)isCachingEnabled;

- (id)fieldForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)transitProperties;
- (id)initWithPass:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasValidNFCPayload;
- (unsigned long long)hash;
- (id)initWithPass:(id)a0 lazyLoadEncodedImages:(BOOL)a1;
- (id)encodeAsData:(id)a0;
- (void)encodeObject:(id)a0 asDataInCoder:(id)a1 withKey:(id)a2;
- (BOOL)isAddValuePending;
- (BOOL)isEnroute;

@end
