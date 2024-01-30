@class NSMutableArray;

@interface HVPBDataSourceContentState : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *deferredContentStates;

+ (Class)deferredContentStatesType;

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
- (void)clearDeferredContentStates;
- (void)addDeferredContentStates:(id)a0;
- (unsigned long long)deferredContentStatesCount;
- (id)deferredContentStatesAtIndex:(unsigned long long)a0;

@end
