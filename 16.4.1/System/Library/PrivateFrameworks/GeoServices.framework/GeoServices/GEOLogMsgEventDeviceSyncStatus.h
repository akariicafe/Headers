@class NSMutableArray;

@interface GEOLogMsgEventDeviceSyncStatus : PBCodable <NSCopying> {
    NSMutableArray *_syncDatas;
}

@property (retain, nonatomic) NSMutableArray *syncDatas;

+ (BOOL)isValid:(id)a0;
+ (Class)syncDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addSyncData:(id)a0;
- (void)clearSyncDatas;
- (id)syncDataAtIndex:(unsigned long long)a0;
- (unsigned long long)syncDatasCount;

@end
