@class NSMutableArray;

@interface PPPBContactNameRecordCache : PBCodable <NSCopying> {
    struct { unsigned char createdAt : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic) BOOL hasCreatedAt;
@property (nonatomic) long long createdAt;

+ (Class)recordsType;

- (void)addRecords:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearRecords;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)recordsCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
