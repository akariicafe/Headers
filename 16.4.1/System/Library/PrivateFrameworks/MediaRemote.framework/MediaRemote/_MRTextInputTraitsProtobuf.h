@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _pINEntrySeparatorIndexes;
    struct { unsigned char validTextRangeLength : 1; unsigned char validTextRangeLocation : 1; unsigned char autocapitalizationType : 1; unsigned char keyboardType : 1; unsigned char returnKeyType : 1; unsigned char autocorrection : 1; unsigned char enablesReturnKeyAutomatically : 1; unsigned char secureTextEntry : 1; unsigned char spellchecking : 1; } _has;
}

@property (nonatomic) BOOL hasAutocapitalizationType;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) BOOL hasKeyboardType;
@property (nonatomic) int keyboardType;
@property (nonatomic) BOOL hasReturnKeyType;
@property (nonatomic) int returnKeyType;
@property (nonatomic) BOOL hasAutocorrection;
@property (nonatomic) BOOL autocorrection;
@property (nonatomic) BOOL hasSpellchecking;
@property (nonatomic) BOOL spellchecking;
@property (nonatomic) BOOL hasEnablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL hasSecureTextEntry;
@property (nonatomic) BOOL secureTextEntry;
@property (nonatomic) BOOL hasValidTextRangeLocation;
@property (nonatomic) unsigned long long validTextRangeLocation;
@property (nonatomic) BOOL hasValidTextRangeLength;
@property (nonatomic) unsigned long long validTextRangeLength;
@property (readonly, nonatomic) unsigned long long pINEntrySeparatorIndexesCount;
@property (readonly, nonatomic) unsigned long long *pINEntrySeparatorIndexes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsAutocapitalizationType:(id)a0;
- (int)StringAsReturnKeyType:(id)a0;
- (int)StringAsKeyboardType:(id)a0;
- (id)autocapitalizationTypeAsString:(int)a0;
- (void)addPINEntrySeparatorIndexes:(unsigned long long)a0;
- (void)clearPINEntrySeparatorIndexes;
- (id)keyboardTypeAsString:(int)a0;
- (unsigned long long)pINEntrySeparatorIndexesAtIndex:(unsigned long long)a0;
- (id)returnKeyTypeAsString:(int)a0;
- (void)setPINEntrySeparatorIndexes:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
