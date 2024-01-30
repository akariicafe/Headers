@class NSString, NSMutableArray;

@interface ATXNotificationsPBPeriodicLog : PBCodable <NSCopying> {
    struct { unsigned char periodEnd : 1; unsigned char periodStart : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasPeriodStart;
@property (nonatomic) unsigned long long periodStart;
@property (nonatomic) BOOL hasPeriodEnd;
@property (nonatomic) unsigned long long periodEnd;
@property (retain, nonatomic) NSMutableArray *dataUnits;

+ (Class)dataUnitType;

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
- (void)addDataUnit:(id)a0;
- (unsigned long long)dataUnitsCount;
- (void)clearDataUnits;
- (id)dataUnitAtIndex:(unsigned long long)a0;

@end
