@class NSString;

@interface NTPBSearchViewExposure : PBCodable <NSCopying> {
    struct { unsigned char areaPresentationReason : 1; } _has;
}

@property (nonatomic) BOOL hasAreaPresentationReason;
@property (nonatomic) int areaPresentationReason;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsAreaPresentationReason:(id)a0;
- (id)areaPresentationReasonAsString:(int)a0;

@end
