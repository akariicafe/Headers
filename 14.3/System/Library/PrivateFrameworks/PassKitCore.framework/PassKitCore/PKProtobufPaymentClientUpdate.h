@class NSString, NSMutableArray;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSMutableArray *paymentSummaryItems;
@property (retain, nonatomic) NSMutableArray *shippingMethods;
@property (readonly, nonatomic) BOOL hasSelectedAID;
@property (retain, nonatomic) NSString *selectedAID;

+ (Class)paymentSummaryItemsType;
+ (Class)shippingMethodsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addShippingMethods:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)paymentSummaryItemsCount;
- (void)clearPaymentSummaryItems;
- (id)paymentSummaryItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)shippingMethodsCount;
- (void)clearShippingMethods;
- (id)shippingMethodsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)addPaymentSummaryItems:(id)a0;

@end
