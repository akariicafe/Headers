@class CKDPListPosition;

@interface CKDPListRange : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLeft;
@property (retain, nonatomic) CKDPListPosition *left;
@property (readonly, nonatomic) BOOL hasRight;
@property (retain, nonatomic) CKDPListPosition *right;

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
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;

@end
