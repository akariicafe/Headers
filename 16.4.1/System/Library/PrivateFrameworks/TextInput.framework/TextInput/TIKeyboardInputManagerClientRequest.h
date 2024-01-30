@class NSInvocation;

@interface TIKeyboardInputManagerClientRequest : NSObject {
    NSInvocation *_invocation;
}

@property (readonly, nonatomic) NSInvocation *invocation;
@property (nonatomic) unsigned long long errorCount;

+ (id)untargetedInvocationWithInvocation:(id)a0 withCompletion:(BOOL)a1;

- (id)initWithInvocation:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
