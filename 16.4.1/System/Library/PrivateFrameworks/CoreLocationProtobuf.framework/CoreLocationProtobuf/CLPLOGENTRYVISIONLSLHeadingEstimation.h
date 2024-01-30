@class NSMutableArray;

@interface CLPLOGENTRYVISIONLSLHeadingEstimation : PBCodable <NSCopying> {
    struct { unsigned char status : 1; unsigned char statusDEPRECATED : 1; } _has;
}

@property (nonatomic) BOOL hasStatusDEPRECATED;
@property (nonatomic) int statusDEPRECATED;
@property (retain, nonatomic) NSMutableArray *headings;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

+ (Class)headingsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsStatusDEPRECATED:(id)a0;
- (void)addHeadings:(id)a0;
- (void)clearHeadings;
- (id)headingsAtIndex:(unsigned long long)a0;
- (unsigned long long)headingsCount;
- (id)statusDEPRECATEDAsString:(int)a0;

@end
