@class NSString, NSMutableArray, ATXPBCGRectWrapper;

@interface ATXPBHomeScreenEventMetadata : PBCodable <NSCopying> {
    struct { unsigned char pageIndex : 1; unsigned char isSuggestionInAddWidgetSheet : 1; unsigned char isWidgetInTodayView : 1; } _has;
}

@property (nonatomic) BOOL hasPageIndex;
@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) NSMutableArray *stackIds;
@property (retain, nonatomic) NSMutableArray *widgetIdentifiables;
@property (retain, nonatomic) NSMutableArray *widgetInStackIdentifiables;
@property (nonatomic) BOOL hasIsSuggestionInAddWidgetSheet;
@property (nonatomic) BOOL isSuggestionInAddWidgetSheet;
@property (nonatomic) BOOL hasIsWidgetInTodayView;
@property (nonatomic) BOOL isWidgetInTodayView;
@property (readonly, nonatomic) BOOL hasVisibleRect;
@property (retain, nonatomic) ATXPBCGRectWrapper *visibleRect;
@property (readonly, nonatomic) BOOL hasEngagedUrl;
@property (retain, nonatomic) NSString *engagedUrl;

+ (Class)stackIdsType;
+ (Class)widgetIdentifiablesType;
+ (Class)widgetInStackIdentifiablesType;

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
- (void)addStackIds:(id)a0;
- (void)addWidgetIdentifiables:(id)a0;
- (void)addWidgetInStackIdentifiables:(id)a0;
- (unsigned long long)stackIdsCount;
- (void)clearStackIds;
- (id)stackIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)widgetIdentifiablesCount;
- (void)clearWidgetIdentifiables;
- (id)widgetIdentifiablesAtIndex:(unsigned long long)a0;
- (unsigned long long)widgetInStackIdentifiablesCount;
- (void)clearWidgetInStackIdentifiables;
- (id)widgetInStackIdentifiablesAtIndex:(unsigned long long)a0;

@end
