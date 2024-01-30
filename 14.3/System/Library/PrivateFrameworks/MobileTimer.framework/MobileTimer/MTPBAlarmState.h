@class NSMutableArray;

@interface MTPBAlarmState : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *alarms;

+ (Class)alarmsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addAlarms:(id)a0;
- (id)description;
- (void)clearAlarms;
- (id)alarmsAtIndex:(unsigned long long)a0;
- (unsigned long long)alarmsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
