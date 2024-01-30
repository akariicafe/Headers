@class NSMutableData, NSArray, ABVCardWatchdogTimer;

@interface ABVCardLexer : NSObject {
    NSMutableData *_data;
    char *_bytes;
    unsigned long long _length;
    unsigned int _peakedPoint;
    unsigned int _cursor;
    BOOL _unicode;
    int _errorCount;
    NSArray *_activeTokenSets;
    ABVCardWatchdogTimer *_timer;
}

- (unsigned int)cursor;
- (BOOL)atEOF;
- (void)dealloc;
- (int)tokenAtCursor;
- (BOOL)advancePastEOL;
- (id)tokenSetForLength:(int)a0;
- (int)nextTokenPeakUnicode:(BOOL)a0 length:(int)a1;
- (int)nextTokenPeakSingle:(BOOL)a0 length:(int)a1;
- (BOOL)advancedPastToken:(int)a0;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (void)advanceToPeakPoint;
- (id)nextUnicodeStringStopTokens:(int)a0 quotedPrintable:(BOOL)a1 trim:(BOOL)a2;
- (id)nextSingleByteStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3;
- (BOOL)advanceToEOL;
- (BOOL)_advancePastLineFoldingSequenceIfNeeded;
- (void)_applyNextStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3 intoString:(id)a4;
- (id)nextStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3;
- (id)nextUnicodeBase64Line:(BOOL *)a0;
- (id)nextSingleByteBase64Line:(BOOL *)a0;
- (id)nextBase64Line:(BOOL *)a0;
- (int)advanceToString;
- (int)advanceToUnicodeString;
- (int)advanceToSingleByteString;
- (int)nextTokenPeak:(BOOL)a0;
- (BOOL)advanceToEOLUnicode;
- (BOOL)advanceToEOLSingle;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advancePastEOLSingle;
- (id)tokenName:(int)a0;
- (id)initWithData:(id)a0 watchdogTimer:(id)a1;
- (id)nextArraySeperatedByToken:(int)a0 stoppingAt:(int)a1 inEncoding:(unsigned long long)a2;
- (id)nextBase64Data;
- (BOOL)advanceToToken:(int)a0 throughTypes:(int)a1;
- (int)errorCount;

@end
