@interface NLDataInstanceLocator : NSObject {
    unsigned long long _instanceIndex;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeOfCharacters;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeOfTokens;
}

@property (readonly) unsigned long long instanceIndex;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfCharacters;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfTokens;

- (id)description;
- (id)initWithInstanceIndex:(unsigned long long)a0 rangeOfCharacters:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 rangeOfTokens:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
