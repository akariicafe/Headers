@class NSMutableArray;

@interface HVPBContentState : PBCodable <NSCopying> {
    struct { unsigned char levelOfService : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *consumers;
@property (nonatomic) BOOL hasLevelOfService;
@property (nonatomic) int levelOfService;

+ (Class)consumersType;

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
- (void)clearConsumers;
- (void)addConsumers:(id)a0;
- (unsigned long long)consumersCount;
- (id)consumersAtIndex:(unsigned long long)a0;

@end
