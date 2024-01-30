@class NSString, NSMutableAttributedString, NSLocale;

@interface AXMSemanticText : NSObject {
    NSMutableAttributedString *_text;
}

@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *transformedSpeechText;
@property (nonatomic) long long tokenizedLength;
@property (readonly, nonatomic) NSString *preprocessedText;
@property (readonly, nonatomic) BOOL isSemanticallyComplete;

- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRange;
- (void).cxx_destruct;
- (void)addCustomPattern:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addDataDetector:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addIsInLexionMarker:(BOOL)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addNLPToken:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addNumericToken:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addSemanticErrorWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateCustomPatterns:(id /* block */)a0;
- (void)enumerateDataDetectors:(id /* block */)a0;
- (void)enumerateLexiconMarkers:(id /* block */)a0;
- (void)enumerateNLPTokens:(id /* block */)a0;
- (void)enumerateNumericTokens:(id /* block */)a0;
- (void)enumerateSemanticErrors:(id /* block */)a0;
- (id)initWithText:(id)a0 locale:(id)a1;
- (id)makeCursor;

@end
