@class NSString, NSMutableArray, NPKProtoStandalonePaymentDigitalIssuanceMetadata;

@interface NPKProtoStandalonePaymentProvisioningMethodMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProductIdentifier;
@property (retain, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) BOOL hasCurrency;
@property (retain, nonatomic) NSString *currency;
@property (readonly, nonatomic) BOOL hasDepositAmount;
@property (retain, nonatomic) NSString *depositAmount;
@property (readonly, nonatomic) BOOL hasMinLoadedBalance;
@property (retain, nonatomic) NSString *minLoadedBalance;
@property (readonly, nonatomic) BOOL hasMaxLoadedBalance;
@property (retain, nonatomic) NSString *maxLoadedBalance;
@property (retain, nonatomic) NSMutableArray *requiredFields;
@property (readonly, nonatomic) BOOL hasReaderModeMetadataJson;
@property (retain, nonatomic) NSString *readerModeMetadataJson;
@property (readonly, nonatomic) BOOL hasDigitalIssuanceMetadata;
@property (retain, nonatomic) NPKProtoStandalonePaymentDigitalIssuanceMetadata *digitalIssuanceMetadata;
@property (readonly, nonatomic) BOOL hasReaderModeResourcesJson;
@property (retain, nonatomic) NSString *readerModeResourcesJson;
@property (readonly, nonatomic) BOOL hasMinimumReaderModeBalance;
@property (retain, nonatomic) NSString *minimumReaderModeBalance;

+ (Class)requiredFieldsType;

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
- (void)addRequiredFields:(id)a0;
- (void)clearRequiredFields;
- (id)requiredFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)requiredFieldsCount;

@end
