@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _pINEntrySeparatorIndexes;
    unsigned long long _validTextRangeLength;
    unsigned long long _validTextRangeLocation;
    int _autocapitalizationType;
    int _keyboardType;
    int _returnKeyType;
    BOOL _autocorrection;
    BOOL _enablesReturnKeyAutomatically;
    BOOL _secureTextEntry;
    BOOL _spellchecking;
    struct { unsigned char validTextRangeLength : 1; unsigned char validTextRangeLocation : 1; unsigned char autocapitalizationType : 1; unsigned char keyboardType : 1; unsigned char returnKeyType : 1; unsigned char autocorrection : 1; unsigned char enablesReturnKeyAutomatically : 1; unsigned char secureTextEntry : 1; unsigned char spellchecking : 1; } _has;
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
