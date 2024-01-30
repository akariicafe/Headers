@class NSString;

@interface NTPBSearchBegin : PBCodable <NSCopying> {
    struct { unsigned char searchLocation : 1; } _has;
}

@property (nonatomic) BOOL hasSearchLocation;
@property (nonatomic) int searchLocation;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;

- (void).cxx_destruct;
- (id)searchLocationAsString:(int)a0;
- (int)StringAsSearchLocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
