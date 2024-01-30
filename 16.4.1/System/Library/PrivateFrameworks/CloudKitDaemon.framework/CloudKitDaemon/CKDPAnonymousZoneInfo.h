@class NSString, NSData;

@interface CKDPAnonymousZoneInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAnonymousZoneInfoID;
@property (retain, nonatomic) NSString *anonymousZoneInfoID;
@property (readonly, nonatomic) BOOL hasAnonymousZoneInfoData;
@property (retain, nonatomic) NSData *anonymousZoneInfoData;

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

@end
