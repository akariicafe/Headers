@class NSMutableSet, Protocol;

@interface AMSInlineDelegate : NSObject

@property (retain, nonatomic) NSMutableSet *implementations;
@property (retain, nonatomic) Protocol *protocol;

- (BOOL)implementOptionalInstanceMethodWithSelector:(SEL)a0 block:(id)a1;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (void)dealloc;
- (id)_initWithProtocol:(id)a0;
- (BOOL)_implementMethodWithSelector:(SEL)a0 isRequired:(BOOL)a1 isInstance:(BOOL)a2 block:(id)a3;
- (BOOL)implementOptionalClassMethodWithSelector:(SEL)a0 block:(id)a1;
- (BOOL)implementRequiredClassMethodWithSelector:(SEL)a0 block:(id)a1;
- (BOOL)implementRequiredInstanceMethodWithSelector:(SEL)a0 block:(id)a1;

@end
