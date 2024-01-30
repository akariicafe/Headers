@interface _ICLLAvailability : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _repeatModes;
    struct { int *list; unsigned long long count; unsigned long long size; } _shuffleModes;
    BOOL _autoPlay;
    struct { unsigned char autoPlay : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
