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

- (unsigned long long)eventsCount;
- (void)addEvents:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearEvents;
- (id)dictionaryRepresentation;

@end
