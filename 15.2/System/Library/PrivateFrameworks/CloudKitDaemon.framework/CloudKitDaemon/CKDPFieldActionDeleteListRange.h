@class CKDPListRange;

@interface CKDPFieldActionDeleteListRange : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRange;
@property (retain, nonatomic) CKDPListRange *range;

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

@end
