@class NSString, NSMutableArray;

@interface ATXPBBiomeProactiveSuggestionUIFeedbackResult : PBCodable <NSCopying> {
    struct { unsigned char clientModelCacheCreationDate : 1; unsigned char sessionEndDate : 1; unsigned char sessionStartDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) BOOL hasBlendingUICacheUpdateUUID;
@property (retain, nonatomic) NSString *blendingUICacheUpdateUUID;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) BOOL hasClientModelCacheCreationDate;
@property (nonatomic) double clientModelCacheCreationDate;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (nonatomic) BOOL hasSessionStartDate;
@property (nonatomic) double sessionStartDate;
@property (nonatomic) BOOL hasSessionEndDate;
@property (nonatomic) double sessionEndDate;
@property (retain, nonatomic) NSMutableArray *shownSuggestions;
@property (retain, nonatomic) NSMutableArray *engagedSuggestions;
@property (retain, nonatomic) NSMutableArray *rejectedSuggestions;

+ (Class)shownSuggestionsType;
+ (Class)engagedSuggestionsType;
+ (Class)rejectedSuggestionsType;

- (void)addEngagedSuggestions:(id)a0;
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
- (void)addShownSuggestions:(id)a0;
- (void)addRejectedSuggestions:(id)a0;
- (unsigned long long)shownSuggestionsCount;
- (void)clearShownSuggestions;
- (id)shownSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)engagedSuggestionsCount;
- (void)clearEngagedSuggestions;
- (id)engagedSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)rejectedSuggestionsCount;
- (void)clearRejectedSuggestions;
- (id)rejectedSuggestionsAtIndex:(unsigned long long)a0;

@end
