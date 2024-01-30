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
