@class NSString;

@interface CLPPrivacySanitization : PBCodable <NSCopying> {
    struct { unsigned char tripSegmentType : 1; } _has;
}

@property (nonatomic) BOOL hasTripSegmentType;
@property (nonatomic) int tripSegmentType;
@property (retain, nonatomic) NSString *version;

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
- (int)StringAsTripSegmentType:(id)a0;
- (id)tripSegmentTypeAsString:(int)a0;

@end
