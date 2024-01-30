@class NSMutableArray;

@interface PBBProtoTinkerWirelessCredentials : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *serializedNetworkRecords;

+ (Class)serializedNetworkRecordType;

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
- (id)serializedNetworkRecordAtIndex:(unsigned long long)a0;
- (void)addSerializedNetworkRecord:(id)a0;
- (void)clearSerializedNetworkRecords;
- (unsigned long long)serializedNetworkRecordsCount;

@end
