@class NSString, NSMutableArray;

@interface NWAWDNWAccumulator : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *durations;

+ (Class)durationsType;

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
- (void)clearDurations;
- (void)addDurations:(id)a0;
- (unsigned long long)durationsCount;
- (id)durationsAtIndex:(unsigned long long)a0;

@end
