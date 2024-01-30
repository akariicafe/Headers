@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (retain, nonatomic) NSMutableArray *chosenPaymentCredentialIdentifiers;

+ (Class)chosenPaymentCredentialIdentifiersType;

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
- (void)addChosenPaymentCredentialIdentifiers:(id)a0;
- (unsigned long long)chosenPaymentCredentialIdentifiersCount;
- (void)clearChosenPaymentCredentialIdentifiers;
- (id)chosenPaymentCredentialIdentifiersAtIndex:(unsigned long long)a0;

@end
