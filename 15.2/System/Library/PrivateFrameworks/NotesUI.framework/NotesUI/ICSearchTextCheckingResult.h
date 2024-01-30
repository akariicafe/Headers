@class NSString;

@interface ICSearchTextCheckingResult : NSTextCheckingResult

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } ic_range;
@property (retain, nonatomic) NSString *csEvaluatorMatchString;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 csEvaluatorMatchString:(id)a1;

@end
