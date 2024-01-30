@class NSString;

@interface BMPBPOICategoryEvent : PBCodable <NSCopying> {
    struct { unsigned char timeIntervalSince1970 : 1; unsigned char rank : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPoiCategory;
@property (retain, nonatomic) NSString *poiCategory;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL hasTimeIntervalSince1970;
@property (nonatomic) double timeIntervalSince1970;

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

@end
