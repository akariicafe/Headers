@class NSMutableString;

@interface MFMimeEnrichedReader : NSObject {
    struct { unsigned short buffer[64]; struct __CFString *theString; unsigned short *directUniCharBuffer; char *directCStringBuffer; struct { long long location; long long length; } rangeToBuffer; long long bufferedRangeStart; long long bufferedRangeEnd; } _inputBuffer;
    long long _currentIndex;
    long long _inputLength;
    unsigned int _noFillLevel : 30;
    unsigned char _eatOneNewline : 1;
    unsigned char _insideComment : 1;
    unsigned char _wantsPlainText : 1;
    int _lastQuoteLevel;
    struct __CFArray { } *_commandStack;
    id _outputString;
    NSMutableString *_outputBuffer;
    struct __CFString { } *_prependHTML;
    struct __CFString { } *_postpendHTML;
    float _indentWidth;
}

+ (struct __CFCharacterSet { } *)parenSet;
+ (struct __CFCharacterSet { } *)punctuationSet;

- (void)dealloc;
- (id)description;
- (void)setWantsHTML:(BOOL)a0;
- (id)currentFont;
- (void)mismatchError:(id)a0;
- (void)parseParameterString:(id)a0;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)handleNoParameterCommand:(const struct { id x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 2; } *)a0;
- (void)setupFontStackEntry:(struct _CommandStackEntry { struct *x0; id x1; } *)a0;
- (void)appendNewLine:(id)a0;
- (int)readTokenInto:(id *)a0;
- (void)resetStateWithString:(id)a0 outputString:(id)a1;
- (void)beginCommand:(id)a0;
- (void)endCommand:(id)a0;
- (void)appendStringToBuffer:(id)a0;
- (void)closeUpQuoting;
- (void)convertRichTextString:(id)a0 intoOutputString:(id)a1;
- (void)convertEnrichedString:(id)a0 intoOutputString:(id)a1;

@end
