@class NSString, NSMutableArray, ATXNotificationsPBContext;

@interface ATXNotificationsPBRecord : PBCodable <NSCopying> {
    struct { unsigned char suppActions : 1; unsigned char timezone : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasTopic;
@property (retain, nonatomic) NSString *topic;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) ATXNotificationsPBContext *context;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasSuppActions;
@property (nonatomic) int suppActions;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) int timezone;

+ (Class)eventsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEvents;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)eventsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;

@end
