@class NSMutableArray;

@interface AWDCoreRoutineDeletionGroupStats : PBCodable <NSCopying> {
    struct { unsigned char itemType : 1; unsigned char oldestRecordAgeInDays : 1; } _has;
}

@property (nonatomic) BOOL hasItemType;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) BOOL hasOldestRecordAgeInDays;
@property (nonatomic) unsigned int oldestRecordAgeInDays;
@property (retain, nonatomic) NSMutableArray *records;

+ (Class)recordsType;

- (void)addRecords:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearRecords;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)recordsCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
