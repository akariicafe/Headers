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
@property (retain, nonatomic) NSMutableArray *datas;

+ (Class)dataType;

- (id)dataAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addData:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)datasCount;
- (void)clearDatas;

@end
