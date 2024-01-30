@class NSString, TMLMethodDescriptor, NSArray, NSInvocation;

@interface TMLMethodCall : NSObject {
    TMLMethodDescriptor *_methodDescriptor;
    SEL _selector;
    id /* block */ _block;
    NSInvocation *_invocation;
    NSArray *_argTypes;
}

@property (readonly, nonatomic) NSString *methodName;
@property (readonly, nonatomic) BOOL classMethod;

- (void).cxx_destruct;
- (id)callWithArguments:(id)a0;
- (id)_callWithArguments:(id)a0;
- (id)initWithMethodDescriptor:(id)a0 forClass:(Class)a1;

@end
