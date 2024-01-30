@class NSString, NPKProtoStandalonePaymentCredential, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandaloneCreditAccountCredential : PBCodable <NSCopying> {
    struct { unsigned char creditLimit : 1; unsigned char currentBalance : 1; } _has;
}

@property (retain, nonatomic) NPKProtoStandalonePaymentCredential *paymentCredential;
@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) BOOL hasCurrentBalance;
@property (nonatomic) double currentBalance;
@property (nonatomic) BOOL hasCreditLimit;
@property (nonatomic) double creditLimit;

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
