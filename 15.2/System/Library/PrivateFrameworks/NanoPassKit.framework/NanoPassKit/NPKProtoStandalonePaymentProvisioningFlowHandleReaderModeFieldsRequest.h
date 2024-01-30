@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleReaderModeFieldsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (retain, nonatomic) NSMutableArray *readerModeFields;

+ (Class)readerModeFieldsType;

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
- (void)addReaderModeFields:(id)a0;
- (unsigned long long)readerModeFieldsCount;
- (void)clearReaderModeFields;
- (id)readerModeFieldsAtIndex:(unsigned long long)a0;

@end
