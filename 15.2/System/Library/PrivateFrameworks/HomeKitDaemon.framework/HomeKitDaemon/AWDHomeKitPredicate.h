@class NSMutableArray;

@interface AWDHomeKitPredicate : PBCodable <NSCopying> {
    struct { unsigned char containsCalendarTime : 1; unsigned char containsCharacteristicValue : 1; unsigned char containsSignificantTime : 1; unsigned char containsSignificantTimeOffset : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *presenceEvents;
@property (nonatomic) BOOL hasContainsCharacteristicValue;
@property (nonatomic) BOOL containsCharacteristicValue;
@property (nonatomic) BOOL hasContainsSignificantTime;
@property (nonatomic) BOOL containsSignificantTime;
@property (nonatomic) BOOL hasContainsSignificantTimeOffset;
@property (nonatomic) BOOL containsSignificantTimeOffset;
@property (nonatomic) BOOL hasContainsCalendarTime;
@property (nonatomic) BOOL containsCalendarTime;

+ (Class)presenceEventsType;

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
- (void)clearPresenceEvents;
- (void)addPresenceEvents:(id)a0;
- (unsigned long long)presenceEventsCount;
- (id)presenceEventsAtIndex:(unsigned long long)a0;

@end
