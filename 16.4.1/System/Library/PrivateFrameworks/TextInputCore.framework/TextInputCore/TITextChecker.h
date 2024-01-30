@protocol _TIUITextChecking;

@interface TITextChecker : NSObject

@property (readonly, nonatomic) id<_TIUITextChecking> checker;

+ (id)_UITextCheckerWithAsynchronousLoading:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkSpellingOfString:(id)a0 startingAt:(long long)a1 language:(id)a2 wrap:(BOOL)a3 correction:(id *)a4;
- (BOOL)doneLoading;
- (id)initWithAsynchronousLoading:(BOOL)a0;

@end
