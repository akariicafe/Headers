@class SYPeer;

@interface SYClock : PBCodable <NSCopying>

@property (retain, nonatomic) SYPeer *peer;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)increment;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)_myDescription;
- (unsigned long long)increaseBy:(unsigned long long)a0;

@end
