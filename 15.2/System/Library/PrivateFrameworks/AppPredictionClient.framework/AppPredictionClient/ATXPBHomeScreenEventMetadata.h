@class NSString, NSMutableArray, ATXPBCGRectWrapper;

@interface ATXPBHomeScreenEventMetadata : PBCodable <NSCopying> {
    struct { unsigned char pageIndex : 1; unsigned char isStalenessRotation : 1; unsigned char isSuggestionInAddWidgetSheet : 1; unsigned char isWidgetInTodayView : 1; } _has;
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
@property (nonatomic) BOOL hasIsStalenessRotation;
@property (nonatomic) BOOL isStalenessRotation;

+ (Class)stackIdsType;
+ (Class)widgetIdentifiablesType;
+ (Class)widgetInStackIdentifiablesType;

- (void)addStackIds:(id)a0;
- (unsigned long long)widgetIdentifiablesCount;
- (void)clearWidgetInStackIdentifiables;
- (unsigned long long)stackIdsCount;
- (void)addWidgetInStackIdentifiables:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addWidgetIdentifiables:(id)a0;
- (id)description;
- (id)widgetInStackIdentifiablesAtIndex:(unsigned long long)a0;
- (id)widgetIdentifiablesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearWidgetIdentifiables;
- (unsigned long long)widgetInStackIdentifiablesCount;
- (unsigned long long)hash;
- (id)stackIdsAtIndex:(unsigned long long)a0;
- (void)clearStackIds;
- (id)dictionaryRepresentation;

@end
