@class Protocol;

@interface CKWeakObjectCallbackProxy : NSObject

@property (weak, nonatomic) id weakObject;
@property (retain, nonatomic) Protocol *callbackProtocol;
@property (nonatomic) BOOL hadObject;

- (id)initWithWeakObject:(id)a0 callbackProtocol:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
