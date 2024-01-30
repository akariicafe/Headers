@class NSString;

@interface ATXPBNotificationSuggestionInteractionEvent : PBCodable <NSCopying> {
    struct { unsigned char secondsSinceReferenceDate : 1; unsigned char eventType : 1; unsigned char suggestionType : 1; } _has;
}

@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic) int suggestionType;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasSuggestionUUID;
@property (retain, nonatomic) NSString *suggestionUUID;
@property (nonatomic) BOOL hasSecondsSinceReferenceDate;
@property (nonatomic) double secondsSinceReferenceDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)eventTypeAsString:(int)a0;
- (id)suggestionTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsSuggestionType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsEventType:(id)a0;
- (void).cxx_destruct;

@end
