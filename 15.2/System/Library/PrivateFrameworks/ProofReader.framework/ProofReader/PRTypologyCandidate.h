@class NSString, NSTextCheckingResult;

@interface PRTypologyCandidate : NSObject {
    NSString *_candidateString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRange;
    NSTextCheckingResult *_result;
    double _openTime;
    double _closeTime;
    BOOL _isOpen;
}

+ (id)openTypologyCandidate:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inString:(id)a2;

- (id)description;
- (id)initWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)closeTypologyCandidateWithResult:(id)a0;

@end
