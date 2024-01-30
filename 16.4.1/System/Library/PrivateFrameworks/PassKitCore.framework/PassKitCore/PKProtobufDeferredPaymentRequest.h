@class NSString, PKProtobufPaymentSummaryItem;

@interface PKProtobufDeferredPaymentRequest : PBRequest <NSCopying> {
    struct { unsigned char freeCancellationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPaymentDescription;
@property (retain, nonatomic) NSString *paymentDescription;
@property (readonly, nonatomic) BOOL hasDeferredBilling;
@property (retain, nonatomic) PKProtobufPaymentSummaryItem *deferredBilling;
@property (readonly, nonatomic) BOOL hasBillingAgreement;
@property (retain, nonatomic) NSString *billingAgreement;
@property (readonly, nonatomic) BOOL hasManagementURL;
@property (retain, nonatomic) NSString *managementURL;
@property (readonly, nonatomic) BOOL hasTokenNotificationURL;
@property (retain, nonatomic) NSString *tokenNotificationURL;
@property (nonatomic) BOOL hasFreeCancellationDate;
@property (nonatomic) double freeCancellationDate;
@property (readonly, nonatomic) BOOL hasFreeCancellationDateTimeZone;
@property (retain, nonatomic) NSString *freeCancellationDateTimeZone;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
