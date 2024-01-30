@class NSString, PKProtobufCustomPrecisionAmount;

@interface PKProtobufPaymentApplication : PBCodable <NSCopying> {
    struct { unsigned char inAppPINRequiredAmount : 1; unsigned char inAppPriority : 1; unsigned char auxiliaryPaymentType : 1; unsigned char paymentNetworkIdentifier : 1; unsigned char paymentType : 1; unsigned char state : 1; unsigned char auxiliary : 1; unsigned char inAppPINRequired : 1; unsigned char supportsContactlessPayment : 1; unsigned char supportsInAppPayment : 1; unsigned char supportsMerchantTokens : 1; unsigned char supportsMultiTokens : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDpanIdentifier;
@property (retain, nonatomic) NSString *dpanIdentifier;
@property (readonly, nonatomic) BOOL hasDpanSuffix;
@property (retain, nonatomic) NSString *dpanSuffix;
@property (readonly, nonatomic) BOOL hasSanitizedDpan;
@property (retain, nonatomic) NSString *sanitizedDpan;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL hasSecureElementIdenfitier;
@property (retain, nonatomic) NSString *secureElementIdenfitier;
@property (nonatomic) BOOL hasState;
@property (nonatomic) unsigned int state;
@property (readonly, nonatomic) BOOL hasSuspendedReason;
@property (retain, nonatomic) NSString *suspendedReason;
@property (nonatomic) BOOL hasSupportsContactlessPayment;
@property (nonatomic) BOOL supportsContactlessPayment;
@property (nonatomic) BOOL hasSupportsInAppPayment;
@property (nonatomic) BOOL supportsInAppPayment;
@property (nonatomic) BOOL hasPaymentNetworkIdentifier;
@property (nonatomic) unsigned int paymentNetworkIdentifier;
@property (nonatomic) BOOL hasInAppPINRequired;
@property (nonatomic) BOOL inAppPINRequired;
@property (nonatomic) BOOL hasInAppPINRequiredAmount;
@property (nonatomic) long long inAppPINRequiredAmount;
@property (readonly, nonatomic) BOOL hasInAppPINRequiredCurrency;
@property (retain, nonatomic) NSString *inAppPINRequiredCurrency;
@property (nonatomic) BOOL hasPaymentType;
@property (nonatomic) unsigned int paymentType;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasAuxiliary;
@property (nonatomic) BOOL auxiliary;
@property (nonatomic) BOOL hasInAppPriority;
@property (nonatomic) long long inAppPriority;
@property (nonatomic) BOOL hasAuxiliaryPaymentType;
@property (nonatomic) unsigned int auxiliaryPaymentType;
@property (readonly, nonatomic) BOOL hasApanIdentifier;
@property (retain, nonatomic) NSString *apanIdentifier;
@property (readonly, nonatomic) BOOL hasApanSuffix;
@property (retain, nonatomic) NSString *apanSuffix;
@property (nonatomic) BOOL hasSupportsMerchantTokens;
@property (nonatomic) BOOL supportsMerchantTokens;
@property (nonatomic) BOOL hasSupportsMultiTokens;
@property (nonatomic) BOOL supportsMultiTokens;
@property (readonly, nonatomic) BOOL hasCustomPrecisionInAppPINRequiredAmount;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionInAppPINRequiredAmount;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
