@class NSString, NPKProtoStandalonePaymentCredential, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandalonePaymentRemoteCredential : PBCodable <NSCopying> {
    struct { unsigned char rank : 1; } _has;
}

@property (retain, nonatomic) NPKProtoStandalonePaymentCredential *paymentCredential;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasPassURL;
@property (retain, nonatomic) NSString *passURL;
@property (readonly, nonatomic) BOOL hasSummaryMetadataDescription;
@property (retain, nonatomic) NSString *summaryMetadataDescription;
@property (readonly, nonatomic) BOOL hasStatusDescription;
@property (retain, nonatomic) NSString *statusDescription;
@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) unsigned int rank;
@property (readonly, nonatomic) BOOL hasProductIdentifier;
@property (retain, nonatomic) NSString *productIdentifier;

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
