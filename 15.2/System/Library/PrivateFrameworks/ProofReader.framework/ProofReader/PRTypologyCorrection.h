@class NSString, NSMutableString, NSTextCheckingResult;

@interface PRTypologyCorrection : NSObject {
    NSString *_misspelling;
    struct _NSRange { unsigned long long location; unsigned long long length; } _misspelledRange;
    NSTextCheckingResult *_correctionResult;
    NSMutableString *_logs;
    double _openTime;
    double _closeTime;
    BOOL _isOpen;
}

+ (id)openTypologyCorrectionWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inString:(id)a2;

- (id)description;
- (id)initWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addTypologyCorrectionLog:(id)a0;
- (void)closeTypologyCorrectionWithResult:(id)a0;

@end
