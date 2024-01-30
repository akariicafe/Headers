@class Protocol, NSHashTable;

@interface NFMultiDelegate : NSObject

@property (readonly, nonatomic) NSHashTable *children;
@property (readonly, nonatomic) Protocol *delegateProtocol;
@property (readonly, nonatomic) id delegate;

- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)addDelegate:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithDelegate:(id)a0 delegateProtocol:(id)a1;
- (void)replaceDelegate:(id)a0 withDelegate:(id)a1;

@end
