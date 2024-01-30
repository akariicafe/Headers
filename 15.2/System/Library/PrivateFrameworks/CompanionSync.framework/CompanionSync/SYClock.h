@class SYPeer;

@interface SYClock : PBCodable <NSCopying>

@property (retain, nonatomic) SYPeer *peer;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

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
- (unsigned long long)increment;
- (id)_myDescription;
- (unsigned long long)increaseBy:(unsigned long long)a0;

@end
