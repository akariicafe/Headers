@interface ICPAPlayModeDictionary : PBCodable <NSCopying> {
    int _autoPlayMode;
    int _repeatPlayMode;
    int _shufflePlayMode;
    struct { unsigned char autoPlayMode : 1; unsigned char repeatPlayMode : 1; unsigned char shufflePlayMode : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
