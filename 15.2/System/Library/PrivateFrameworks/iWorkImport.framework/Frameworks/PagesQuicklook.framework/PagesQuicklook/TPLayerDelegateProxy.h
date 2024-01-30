@class NSString;
@protocol TPLayerDelegateProxyDelegate;

@interface TPLayerDelegateProxy : NSObject <CALayerDelegate> {
    id<TPLayerDelegateProxyDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)clearDelegate;
- (void)displayLayer:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)respondsToSelector:(SEL)a0;

@end
