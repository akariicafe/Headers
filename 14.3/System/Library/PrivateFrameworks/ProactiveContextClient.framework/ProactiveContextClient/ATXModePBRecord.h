@class NSString, NSMutableArray;

@interface ATXModePBRecord : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char timezone : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) int timezone;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

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
