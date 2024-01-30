@class NSString;

@interface ATXPBSharedDigestEngagementTrackingMetrics : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char numDigestExpansions : 1; unsigned char numEngagementsAfterExpiration : 1; unsigned char numEngagementsInScheduled : 1; unsigned char numEngagementsInUpcoming : 1; unsigned char numExpansions : 1; unsigned char sectionPosition : 1; unsigned char sectionSize : 1; } _has;
}

@property (nonatomic) BOOL hasNumEngagementsInUpcoming;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) BOOL hasNumEngagementsInScheduled;
@property (nonatomic) unsigned long long numEngagementsInScheduled;
@property (nonatomic) BOOL hasNumEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) BOOL hasNumExpansions;
@property (nonatomic) unsigned long long numExpansions;
@property (readonly, nonatomic) BOOL hasSectionIdentifier;
@property (retain, nonatomic) NSString *sectionIdentifier;
@property (nonatomic) BOOL hasSectionPosition;
@property (nonatomic) unsigned long long sectionPosition;
@property (nonatomic) BOOL hasSectionSize;
@property (nonatomic) unsigned long long sectionSize;
@property (nonatomic) BOOL hasNumDigestExpansions;
@property (nonatomic) unsigned long long numDigestExpansions;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
