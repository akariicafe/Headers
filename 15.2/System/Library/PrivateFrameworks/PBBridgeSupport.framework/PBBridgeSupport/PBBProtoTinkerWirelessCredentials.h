@class NSMutableArray;

@interface PBBProtoTinkerWirelessCredentials : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *serializedNetworkRecords;

+ (Class)serializedNetworkRecordType;

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
- (void)addSerializedNetworkRecord:(id)a0;
- (unsigned long long)serializedNetworkRecordsCount;
- (void)clearSerializedNetworkRecords;
- (id)serializedNetworkRecordAtIndex:(unsigned long long)a0;

@end
