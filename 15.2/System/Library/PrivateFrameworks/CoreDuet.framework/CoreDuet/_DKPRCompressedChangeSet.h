@class NSData;

@interface _DKPRCompressedChangeSet : PBCodable <NSCopying> {
    unsigned long long _uncompressedLength;
    NSData *_compressedData;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
