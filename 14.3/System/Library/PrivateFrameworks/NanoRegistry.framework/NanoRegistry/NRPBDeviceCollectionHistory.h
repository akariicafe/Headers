@class NRPBSwitchRecordCollection, NSMutableArray;

@interface NRPBDeviceCollectionHistory : PBCodable <NSCopying> {
    struct { unsigned char startIndex : 1; } _has;
}

@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) long long startIndex;
@property (retain, nonatomic) NSMutableArray *historys;
@property (readonly, nonatomic) BOOL hasSwitchRecords;
@property (retain, nonatomic) NRPBSwitchRecordCollection *switchRecords;

+ (Class)historyType;

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
- (void)addHistory:(id)a0;
- (unsigned long long)historysCount;
- (void)clearHistorys;
- (id)historyAtIndex:(unsigned long long)a0;

@end
