@class NSMutableArray;

@interface _MPUProtoBufUserActivityContext : PBCodable <NSCopying> {
    struct { unsigned char originatorType : 1; unsigned char originatorVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *containerItems;
@property (nonatomic) BOOL hasOriginatorType;
@property (nonatomic) int originatorType;
@property (nonatomic) BOOL hasOriginatorVersion;
@property (nonatomic) int originatorVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addContainerItems:(id)a0;
- (unsigned long long)containerItemsCount;
- (void)clearContainerItems;
- (id)containerItemsAtIndex:(unsigned long long)a0;

@end
