@class NSString, NSMutableArray, ATXPBHomeScreenEventMetadata;

@interface ATXPBHomeScreenEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char stackKind : 1; unsigned char stackLocation : 1; unsigned char widgetSize : 1; unsigned char isSuggestedWidget : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (readonly, nonatomic) BOOL hasEventTypeString;
@property (retain, nonatomic) NSString *eventTypeString;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (readonly, nonatomic) BOOL hasStackId;
@property (retain, nonatomic) NSString *stackId;
@property (readonly, nonatomic) BOOL hasWidgetBundleId;
@property (retain, nonatomic) NSString *widgetBundleId;
@property (readonly, nonatomic) BOOL hasWidgetKind;
@property (retain, nonatomic) NSString *widgetKind;
@property (nonatomic) BOOL hasWidgetSize;
@property (nonatomic) int widgetSize;
@property (readonly, nonatomic) BOOL hasIntentDescription;
@property (retain, nonatomic) NSString *intentDescription;
@property (readonly, nonatomic) BOOL hasWidgetUniqueId;
@property (retain, nonatomic) NSString *widgetUniqueId;
@property (retain, nonatomic) NSMutableArray *suggestionIds;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) ATXPBHomeScreenEventMetadata *metadata;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasStackKind;
@property (nonatomic) int stackKind;
@property (nonatomic) BOOL hasStackLocation;
@property (nonatomic) int stackLocation;
@property (nonatomic) BOOL hasIsSuggestedWidget;
@property (nonatomic) BOOL isSuggestedWidget;

+ (Class)suggestionIdsType;

- (int)StringAsWidgetSize:(id)a0;
- (id)suggestionIdsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (int)StringAsStackLocation:(id)a0;
- (void)clearSuggestionIds;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)stackLocationAsString:(int)a0;
- (unsigned long long)hash;
- (int)StringAsStackKind:(id)a0;
- (void)writeTo:(id)a0;
- (id)stackKindAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)addSuggestionIds:(id)a0;
- (id)description;
- (unsigned long long)suggestionIdsCount;
- (void).cxx_destruct;
- (id)widgetSizeAsString:(int)a0;

@end
