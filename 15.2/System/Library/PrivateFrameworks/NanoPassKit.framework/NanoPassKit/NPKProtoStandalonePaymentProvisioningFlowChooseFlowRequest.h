@class NSString, NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseFlowRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (readonly, nonatomic) BOOL hasChosenFlowPickerItemIdentifier;
@property (retain, nonatomic) NSString *chosenFlowPickerItemIdentifier;

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
