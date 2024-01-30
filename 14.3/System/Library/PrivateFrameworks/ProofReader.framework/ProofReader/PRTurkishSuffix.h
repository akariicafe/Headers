@class NSString;

@interface PRTurkishSuffix : NSObject {
    NSString *_pattern;
    NSString *_name;
    unsigned char _patternBuffer[16];
    unsigned char _isOptional[16];
    unsigned long long _patternBufferLength;
    int _suffixType;
    BOOL _postponesApostrophe;
}

+ (id)standardTurkishNounSuffixes;
+ (id)standardTurkishVerbSuffixes;
+ (id)standardTurkishSuffixes;
+ (void)_enumerateSuffixMatchesForBuffer:(char *)a0 length:(unsigned long long)a1 followedByLetter:(unsigned char)a2 options:(unsigned long long)a3 depth:(unsigned long long)a4 matchState:(int)a5 suffixStack:(id *)a6 suffixRangeStack:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a7 usingBlock:(id /* block */)a8;
+ (void)enumerateSuffixMatchesForBuffer:(char *)a0 length:(unsigned long long)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
+ (void)enumerateSuffixMatchesForWord:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)pattern;
- (void)_fillPatternBuffer;
- (int)suffixType;
- (BOOL)postponesApostrophe;
- (id)initWithPattern:(id)a0 name:(id)a1 type:(int)a2 postponesApostrophe:(BOOL)a3;
- (unsigned long long)matchingIndexInBuffer:(char *)a0 length:(unsigned long long)a1 followedByLetter:(unsigned char)a2 matchWithNameOnly:(BOOL *)a3;

@end
