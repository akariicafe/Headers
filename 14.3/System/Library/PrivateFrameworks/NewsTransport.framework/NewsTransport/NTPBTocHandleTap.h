@class NSData;

@interface NTPBTocHandleTap : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTocExposureId;
@property (retain, nonatomic) NSData *tocExposureId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
