@class NSMutableArray;

@interface ATXPBNotificationDeliveryEvent : PBCodable <NSCopying> {
    struct { unsigned char deliveryUI : 1; } _has;
}

@property (nonatomic) BOOL hasDeliveryUI;
@property (nonatomic) int deliveryUI;
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs;

+ (Class)suggestionUUIDType;

- (void)clearSuggestionUUIDs;
- (id)suggestionUUIDAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsDeliveryUI:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)suggestionUUIDsCount;
- (id)description;
- (id)deliveryUIAsString:(int)a0;
- (void).cxx_destruct;
- (void)addSuggestionUUID:(id)a0;

@end
