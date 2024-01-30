@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleManualEntryFieldsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (retain, nonatomic) NSMutableArray *manualEntryFields;

+ (Class)manualEntryFieldsType;

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
- (void)addManualEntryFields:(id)a0;
- (unsigned long long)manualEntryFieldsCount;
- (void)clearManualEntryFields;
- (id)manualEntryFieldsAtIndex:(unsigned long long)a0;

@end
