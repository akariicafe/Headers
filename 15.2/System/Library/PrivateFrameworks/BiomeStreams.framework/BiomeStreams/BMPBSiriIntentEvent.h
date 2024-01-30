@class NSString, NSData;

@interface BMPBSiriIntentEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIntentId;
@property (retain, nonatomic) NSString *intentId;
@property (readonly, nonatomic) BOOL hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) BOOL hasEventData;
@property (retain, nonatomic) NSData *eventData;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
