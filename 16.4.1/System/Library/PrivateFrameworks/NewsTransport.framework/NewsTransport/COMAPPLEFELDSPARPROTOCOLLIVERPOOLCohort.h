@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable <NSCopying> {
    struct { unsigned char clicks : 1; unsigned char impressions : 1; unsigned char rawClicks : 1; unsigned char timestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasClicks;
@property (nonatomic) double clicks;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) double impressions;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL hasRawClicks;
@property (nonatomic) double rawClicks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)typeAsString:(int)a0;

@end
