@class NSString;

@interface PKProtobufPeerPaymentMessage : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCurrency;
@property (retain, nonatomic) NSString *currency;
@property (nonatomic) BOOL hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) BOOL hasSenderAddress;
@property (retain, nonatomic) NSString *senderAddress;
@property (readonly, nonatomic) BOOL hasRecipientAddress;
@property (retain, nonatomic) NSString *recipientAddress;
@property (readonly, nonatomic) BOOL hasRequestToken;
@property (retain, nonatomic) NSString *requestToken;
@property (readonly, nonatomic) BOOL hasPaymentIdentifier;
@property (retain, nonatomic) NSString *paymentIdentifier;
@property (readonly, nonatomic) BOOL hasTransactionIdentifier;
@property (retain, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) BOOL hasMemo;
@property (retain, nonatomic) NSString *memo;
@property (readonly, nonatomic) BOOL hasRequestDeviceScoreIdentifier;
@property (retain, nonatomic) NSString *requestDeviceScoreIdentifier;

- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;

@end
