@class NSMutableArray;

@interface HVPBDataSourceContentState : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *deprecatedDeferredContentStates;
@property (retain, nonatomic) NSMutableArray *deferredContentStates;

+ (Class)deferredContentStatesType;
+ (Class)deprecatedDeferredContentStatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addDeferredContentStates:(id)a0;
- (void)addDeprecatedDeferredContentStates:(id)a0;
- (void)clearDeferredContentStates;
- (void)clearDeprecatedDeferredContentStates;
- (id)deferredContentStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)deferredContentStatesCount;
- (id)deprecatedDeferredContentStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)deprecatedDeferredContentStatesCount;

@end
