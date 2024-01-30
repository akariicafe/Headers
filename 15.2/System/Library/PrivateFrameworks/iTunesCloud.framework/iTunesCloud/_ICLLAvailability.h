@interface _ICLLAvailability : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _repeatModes;
    struct { int *list; unsigned long long count; unsigned long long size; } _shuffleModes;
    BOOL _autoPlay;
    struct { unsigned char autoPlay : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
