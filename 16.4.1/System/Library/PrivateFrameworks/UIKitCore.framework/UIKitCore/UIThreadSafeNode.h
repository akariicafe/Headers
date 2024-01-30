@class DOMNode;

@interface UIThreadSafeNode : NSObject {
    DOMNode *_node;
}

+ (id)threadSafeNodeWithNode:(id)a0;

- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithNode:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)description;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)_realNode;

@end
