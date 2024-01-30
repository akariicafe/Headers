@interface AXTrampoline : NSObject

@property (weak, nonatomic) id caller;
@property (weak, nonatomic) Class targetClass;
@property (nonatomic) BOOL warnAboutUnknownSelectors;

+ (void)methodDoesNotExistSentinal;
+ (id)methodNotFoundSentinal;
+ (id)trampolineWithCaller:(id)a0 targetClass:(Class)a1;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void /* function */ *)_findIMPForSelector:(SEL)a0;
- (BOOL)callerIsClass;
- (id)initWithCaller:(id)a0 targetClass:(Class)a1;

@end
