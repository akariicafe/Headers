@class NSString, MIPArtist, MIPSeries;

@interface MIPTVShow : PBCodable <NSCopying> {
    struct { unsigned char seasonNumber : 1; unsigned char videoQuality : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) BOOL hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (nonatomic) BOOL hasSeasonNumber;
@property (nonatomic) int seasonNumber;
@property (readonly, nonatomic) BOOL hasEpisodeId;
@property (retain, nonatomic) NSString *episodeId;
@property (readonly, nonatomic) BOOL hasEpisodeSortId;
@property (retain, nonatomic) NSString *episodeSortId;
@property (nonatomic) BOOL hasVideoQuality;
@property (nonatomic) int videoQuality;
@property (readonly, nonatomic) BOOL hasNetworkName;
@property (retain, nonatomic) NSString *networkName;

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
