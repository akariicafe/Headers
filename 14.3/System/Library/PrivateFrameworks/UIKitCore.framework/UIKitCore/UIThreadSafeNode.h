@class DOMNode;

@interface UIThreadSafeNode : NSObject {
    DOMNode *_node;
}

+ (id)threadSafeNodeWithNode:(id)a0;

- (id)initWithNode:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)_realNode;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
