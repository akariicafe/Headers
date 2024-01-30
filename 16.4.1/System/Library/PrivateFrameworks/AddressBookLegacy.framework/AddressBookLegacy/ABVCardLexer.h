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

- (int)errorCount;
- (unsigned int)cursor;
- (void)dealloc;
- (int)advanceToString;
- (id)nextSingleByteStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3;
- (id)nextBase64Line:(BOOL *)a0;
- (BOOL)_advancePastLineFoldingSequenceIfNeeded;
- (void)_applyNextStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3 intoString:(id)a4;
- (BOOL)advancePastEOL;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advanceToEOL;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOLUnicode;
- (void)advanceToPeakPoint;
- (int)advanceToSingleByteString;
- (BOOL)advanceToToken:(int)a0 throughTypes:(int)a1;
- (int)advanceToUnicodeString;
- (BOOL)advancedPastToken:(int)a0;
- (BOOL)atEOF;
- (id)initWithData:(id)a0 watchdogTimer:(id)a1;
- (id)nextArraySeperatedByToken:(int)a0 stoppingAt:(int)a1 inEncoding:(unsigned long long)a2;
- (id)nextBase64Data;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (id)nextSingleByteBase64Line:(BOOL *)a0;
- (id)nextStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3;
- (int)nextTokenPeak:(BOOL)a0;
- (int)nextTokenPeakSingle:(BOOL)a0 length:(int)a1;
- (int)nextTokenPeakUnicode:(BOOL)a0 length:(int)a1;
- (id)nextUnicodeBase64Line:(BOOL *)a0;
- (id)nextUnicodeStringStopTokens:(int)a0 quotedPrintable:(BOOL)a1 trim:(BOOL)a2;
- (int)tokenAtCursor;
- (id)tokenName:(int)a0;
- (id)tokenSetForLength:(int)a0;

@end
