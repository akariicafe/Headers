@class NSMutableArray;

@interface HDCodableSectionData : PBCodable <NSCopying> {
    struct { unsigned char sectionDataType : 1; unsigned char timestamp : 1; unsigned char version : 1; unsigned char deleted : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *stringValues;
@property (nonatomic) BOOL hasSectionDataType;
@property (nonatomic) long long sectionDataType;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;

+ (Class)stringValuesType;

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
- (void)clearStringValues;
- (unsigned long long)stringValuesCount;
- (void)addStringValues:(id)a0;
- (id)stringValuesAtIndex:(unsigned long long)a0;

@end
