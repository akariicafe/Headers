@class NSMutableArray, ATXPBFaceGalleryConfiguration;

@interface ATXPBFaceGalleryEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) ATXPBFaceGalleryConfiguration *configuration;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;

- (unsigned long long)itemsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)eventTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)itemsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearItems;
- (id)description;
- (int)StringAsEventType:(id)a0;
- (void).cxx_destruct;
- (void)addItems:(id)a0;

@end
