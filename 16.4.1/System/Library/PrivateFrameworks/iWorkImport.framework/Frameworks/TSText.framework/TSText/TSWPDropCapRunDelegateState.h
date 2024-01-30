@class TSWPDropCapAdornment;

@interface TSWPDropCapRunDelegateState : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;
@property (retain, nonatomic) TSWPDropCapAdornment *adornment;

- (void).cxx_destruct;
- (id)initWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 adornment:(id)a1;

@end
