@class NSString, NSMutableArray;

@interface ATXPBLockscreenEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (retain, nonatomic) NSMutableArray *suggestionIds;

+ (Class)suggestionIdsType;

- (int)StringAsEventType:(id)a0;
- (id)suggestionIdsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearSuggestionIds;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addSuggestionIds:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)suggestionIdsCount;

@end
