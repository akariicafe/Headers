@class NSString, MIPArtist, MIPSeries;

@interface MIPPodcast : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) BOOL hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (readonly, nonatomic) BOOL hasExternalGuid;
@property (retain, nonatomic) NSString *externalGuid;
@property (readonly, nonatomic) BOOL hasFeedUrl;
@property (retain, nonatomic) NSString *feedUrl;

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
