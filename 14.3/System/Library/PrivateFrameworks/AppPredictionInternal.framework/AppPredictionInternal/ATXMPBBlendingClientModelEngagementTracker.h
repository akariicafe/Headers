@class NSString;

@interface ATXMPBBlendingClientModelEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char clientModelCacheAge : 1; unsigned char consumerSubTypeCacheAge : 1; unsigned char engagementType : 1; unsigned char numSuggestionsForClientModelInLayout : 1; unsigned char positionInClientModelCacheOfEngagedSuggestion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLayoutType;
@property (retain, nonatomic) NSString *layoutType;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) BOOL hasNumSuggestionsForClientModelInLayout;
@property (nonatomic) unsigned int numSuggestionsForClientModelInLayout;
@property (nonatomic) BOOL hasPositionInClientModelCacheOfEngagedSuggestion;
@property (nonatomic) unsigned int positionInClientModelCacheOfEngagedSuggestion;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) int engagementType;
@property (nonatomic) BOOL hasConsumerSubTypeCacheAge;
@property (nonatomic) unsigned int consumerSubTypeCacheAge;
@property (nonatomic) BOOL hasClientModelCacheAge;
@property (nonatomic) unsigned int clientModelCacheAge;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (retain, nonatomic) NSString *clientModelABGroup;

- (int)StringAsEngagementType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)engagementTypeAsString:(int)a0;

@end
