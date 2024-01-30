@class NSString, NSCharacterSet;

@interface SFUJsonScanner : NSObject {
    NSString *mString;
    unsigned short *mCharacters;
    unsigned long long mLength;
    unsigned long long mOffset;
    NSCharacterSet *mWhitespaceCharacterSet;
    NSCharacterSet *mDecimalDigitCharacterSet;
}

- (id)initWithString:(id)a0;
- (unsigned short)nextCharacter;
- (void)dealloc;
- (void)skipWhitespace;
- (id)parseObjectWithMaxDepth:(int)a0;
- (id)parseArrayWithMaxDepth:(int)a0;
- (id)parseDictionaryWithMaxDepth:(int)a0;
- (void)appendCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toString:(id)a1;
- (id)parseHexCharacter;
- (id)parseString;
- (BOOL)parseConstantString:(const char *)a0;
- (id)parseNull;
- (id)parseTrue;
- (id)parseFalse;
- (id)parseNumber;

@end
