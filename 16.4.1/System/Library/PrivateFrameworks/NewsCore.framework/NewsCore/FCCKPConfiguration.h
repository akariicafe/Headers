@class NSMutableArray;

@interface FCCKPConfiguration : PBCodable <NSCopying> {
    unsigned long long _created;
    unsigned long long _expires;
    NSMutableArray *_fields;
    struct { unsigned char created : 1; unsigned char expires : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
