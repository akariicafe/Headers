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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearSerializedTriggers;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)serializedTriggersCount;
- (unsigned long long)hash;
- (void)addSerializedTriggers:(id)a0;
- (id)serializedTriggersAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
