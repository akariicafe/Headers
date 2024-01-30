@class NSMutableArray, PBUnknownFields;

@interface GEOPDGroundViewLabel : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_groundViewLabelInfos;
    unsigned long long _groundViewLocationId;
    struct { unsigned char has_groundViewLocationId : 1; } _flags;
}

@property (nonatomic) BOOL hasGroundViewLocationId;
@property (nonatomic) unsigned long long groundViewLocationId;
@property (retain, nonatomic) NSMutableArray *groundViewLabelInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)groundViewLabelInfoType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)clearGroundViewLabelInfos;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (unsigned long long)groundViewLabelInfosCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addGroundViewLabelInfo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)groundViewLabelInfoAtIndex:(unsigned long long)a0;

@end
