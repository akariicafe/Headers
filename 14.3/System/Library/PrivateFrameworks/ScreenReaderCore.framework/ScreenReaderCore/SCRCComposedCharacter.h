@interface SCRCComposedCharacter : NSObject {
    unsigned long long _originalRepresentationLength;
    unsigned long long _normalFormDRepresentationLength;
    unsigned long long _normalFormKCRepresentationLength;
    int *_originalRepresentation;
    int *_normalFormDRepresentation;
    int *_normalFormKCRepresentation;
    long long _originalCombinedCharacterLength;
    struct __CFString { } *_originalCombinedCharacter;
}

- (unsigned long long)length;
- (id)initWithCharacter:(int)a0;
- (int)charAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (struct __CFString { } *)originalString;
- (unsigned long long)originalLength;
- (id)_initWithCharacter:(int)a0;
- (id)_initWithSimpleCharacter:(int)a0;
- (id)_initWithComposedCharacter:(struct __CFString { } *)a0;
- (void)_buildFormKC;
- (int)formKCCharAtIndex:(unsigned long long)a0;
- (void)_buildFormD;
- (BOOL)_formKCContaintsUpperCase;
- (unsigned long long)formKCLength;
- (id)initWithComposedCharacter:(struct __CFString { } *)a0;
- (BOOL)isEqualToUChar32:(int)a0;
- (struct __CFString { } *)copyUnicodeDescriptionString;
- (int)formDCharAtIndex:(unsigned long long)a0;
- (int)originalFromCharAtIndex:(unsigned long long)a0;
- (BOOL)containsUpperCase;
- (unsigned long long)formDLength;

@end
