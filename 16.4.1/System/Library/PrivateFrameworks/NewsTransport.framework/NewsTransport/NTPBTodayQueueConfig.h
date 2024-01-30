@class NSMutableArray;

@interface NTPBTodayQueueConfig : PBCodable <NSCopying> {
    struct { unsigned char widgetVisibleSectionsLimit : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *todaySectionConfigs;
@property (nonatomic) BOOL hasWidgetVisibleSectionsLimit;
@property (nonatomic) unsigned long long widgetVisibleSectionsLimit;

+ (Class)todaySectionConfigsType;

- (void)clearTodaySectionConfigs;
- (id)todaySectionConfigsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addTodaySectionConfigs:(id)a0;
- (id)description;
- (unsigned long long)todaySectionConfigsCount;

@end
