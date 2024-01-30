@class SYMessageHeader, NSMutableArray;

@interface SYChangeMessage : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSMutableArray *changes;

+ (Class)changesType;

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
- (void)addChanges:(id)a0;
- (unsigned long long)changesCount;
- (void)clearChanges;
- (id)changesAtIndex:(unsigned long long)a0;

@end
