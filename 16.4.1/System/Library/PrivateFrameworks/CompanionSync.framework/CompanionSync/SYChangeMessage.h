@class SYMessageHeader, NSMutableArray;

@interface SYChangeMessage : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSMutableArray *changes;

+ (Class)changesType;

- (void)addChanges:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)changesCount;
- (id)description;
- (void).cxx_destruct;
- (id)changesAtIndex:(unsigned long long)a0;
- (void)clearChanges;

@end
