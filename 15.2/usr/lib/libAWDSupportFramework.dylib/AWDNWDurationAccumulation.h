@class NSString, NSMutableArray;

@interface AWDNWDurationAccumulation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *states;

+ (Class)statesType;

- (void)clearStates;
- (void)addStates:(id)a0;
- (unsigned long long)statesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)statesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
