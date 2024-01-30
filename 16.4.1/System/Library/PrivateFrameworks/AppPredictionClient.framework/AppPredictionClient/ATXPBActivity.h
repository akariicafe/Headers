@class NSString, NSMutableArray;

@interface ATXPBActivity : PBCodable <NSCopying> {
    struct { unsigned char origin : 1; unsigned char uiLocation : 1; unsigned char type : 1; unsigned char shouldSuggestTriggers : 1; } _has;
}

@property (nonatomic) BOOL hasUiLocation;
@property (nonatomic) unsigned long long uiLocation;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasModeUUID;
@property (retain, nonatomic) NSString *modeUUID;
@property (readonly, nonatomic) BOOL hasSuggestionUUID;
@property (retain, nonatomic) NSString *suggestionUUID;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) unsigned long long origin;
@property (readonly, nonatomic) BOOL hasOriginBundleId;
@property (retain, nonatomic) NSString *originBundleId;
@property (readonly, nonatomic) BOOL hasOriginAnchorType;
@property (retain, nonatomic) NSString *originAnchorType;
@property (retain, nonatomic) NSMutableArray *serializedTriggers;
@property (nonatomic) BOOL hasShouldSuggestTriggers;
@property (nonatomic) BOOL shouldSuggestTriggers;

+ (Class)serializedTriggersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;
- (void)addSerializedTriggers:(id)a0;
- (void)clearSerializedTriggers;
- (id)serializedTriggersAtIndex:(unsigned long long)a0;
- (unsigned long long)serializedTriggersCount;

@end
