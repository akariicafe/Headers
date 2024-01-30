@class IKCSSToken;

@interface IKCSSTokenizer : NSObject {
    unsigned long long currentOffset;
    unsigned long long textBytesCharCount;
    unsigned short *textBytes;
    IKCSSToken *reconsumeToken;
}

@property (readonly, nonatomic) IKCSSToken *currentToken;

+ (BOOL)isWhitespace:(unsigned short)a0;
+ (BOOL)isDigit:(unsigned short)a0;
+ (BOOL)isNameStartCodePoint:(unsigned short)a0;
+ (BOOL)isUppercaseLetter:(unsigned short)a0;
+ (BOOL)isLowercaseLetter:(unsigned short)a0;
+ (BOOL)isLetter:(unsigned short)a0;
+ (BOOL)isNonASCIICodePoint:(unsigned short)a0;
+ (BOOL)isNewline:(unsigned short)a0;
+ (BOOL)isHexDigit:(unsigned short)a0;
+ (BOOL)isNameCodePoint:(unsigned short)a0;
+ (BOOL)isNonPrintable:(unsigned short)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEOF:(unsigned long long)a0;
- (id)initWithText:(id)a0;
- (id)getNextToken;
- (id)_consumeToken:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (unsigned short)_getChar:(unsigned long long)a0;
- (id)_consumeWhitespace:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeString:(unsigned long long)a0 consumed:(unsigned long long *)a1 toEndChar:(unsigned short)a2;
- (id)_consumeHash:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeDollar:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeAsterisk:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumePlus:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeMinus:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeDot:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeComment:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeSlash:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeLessThan:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeAt:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeBackslash:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeCaret:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeNumeric:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeNameStart:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumePipe:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeTilde:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (BOOL)isValidEscape:(unsigned long long)a0;
- (unsigned short)_consumeEscapedCodePoint:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (BOOL)wouldStartIdentifier:(unsigned long long)a0;
- (id)_consumeName:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeIdentLike:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (BOOL)wouldStartNumber:(unsigned long long)a0;
- (id)_consumeUrl:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (void)_consumeBadUrlRemnants:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (id)_consumeNumber:(unsigned long long)a0 consumed:(unsigned long long *)a1;
- (void)reconsumeToken:(id)a0;
- (id)_consumeUnicodeRange:(unsigned long long)a0 consumed:(unsigned long long *)a1;

@end
