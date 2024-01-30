@class PKProtobufRecurringPaymentRequest, NSString, PKProtobufDeferredPaymentRequest, PKProtobufAutomaticReloadPaymentRequest, NSMutableArray, PKProtobufShippingMethods;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying> {
    struct { unsigned char selectedPaymentType : 1; unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSMutableArray *paymentSummaryItems;
@property (retain, nonatomic) NSMutableArray *shippingMethods;
@property (readonly, nonatomic) BOOL hasSelectedAID;
@property (retain, nonatomic) NSString *selectedAID;
@property (readonly, nonatomic) BOOL hasAvailableShippingMethods;
@property (retain, nonatomic) PKProtobufShippingMethods *availableShippingMethods;
@property (nonatomic) BOOL hasSelectedPaymentType;
@property (nonatomic) unsigned int selectedPaymentType;
@property (retain, nonatomic) NSMutableArray *multiTokenContexts;
@property (readonly, nonatomic) BOOL hasRecurringPaymentRequest;
@property (retain, nonatomic) PKProtobufRecurringPaymentRequest *recurringPaymentRequest;
@property (readonly, nonatomic) BOOL hasAutomaticReloadPaymentRequest;
@property (retain, nonatomic) PKProtobufAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (readonly, nonatomic) BOOL hasDeferredPaymentRequest;
@property (retain, nonatomic) PKProtobufDeferredPaymentRequest *deferredPaymentRequest;

+ (Class)multiTokenContextsType;
+ (Class)paymentSummaryItemsType;
+ (Class)shippingMethodsType;

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
- (void)addMultiTokenContexts:(id)a0;
- (void)addPaymentSummaryItems:(id)a0;
- (void)addShippingMethods:(id)a0;
- (void)clearMultiTokenContexts;
- (void)clearPaymentSummaryItems;
- (void)clearShippingMethods;
- (id)multiTokenContextsAtIndex:(unsigned long long)a0;
- (unsigned long long)multiTokenContextsCount;
- (id)paymentSummaryItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)paymentSummaryItemsCount;
- (id)shippingMethodsAtIndex:(unsigned long long)a0;
- (unsigned long long)shippingMethodsCount;

@end
