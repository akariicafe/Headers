@class NSString, NSMutableArray, ATXPBSpotlightEventMetadata;

@interface ATXPBSpotlightEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasAppConsumerSubType;
@property (retain, nonatomic) NSString *appConsumerSubType;
@property (readonly, nonatomic) BOOL hasActionConsumerSubType;
@property (retain, nonatomic) NSString *actionConsumerSubType;
@property (readonly, nonatomic) BOOL hasAppBlendingCacheId;
@property (retain, nonatomic) NSString *appBlendingCacheId;
@property (readonly, nonatomic) BOOL hasActionBlendingCacheId;
@property (retain, nonatomic) NSString *actionBlendingCacheId;
@property (retain, nonatomic) NSMutableArray *appSuggestionIds;
@property (retain, nonatomic) NSMutableArray *actionSuggestionIds;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) ATXPBSpotlightEventMetadata *metadata;

+ (Class)actionSuggestionIdsType;
+ (Class)appSuggestionIdsType;

- (unsigned long long)actionSuggestionIdsCount;
- (void)addAppSuggestionIds:(id)a0;
- (void)clearAppSuggestionIds;
- (unsigned long long)appSuggestionIdsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)eventTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addActionSuggestionIds:(id)a0;
- (void)clearActionSuggestionIds;
- (unsigned long long)hash;
- (id)actionSuggestionIdsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)appSuggestionIdsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsEventType:(id)a0;
- (void).cxx_destruct;

@end
