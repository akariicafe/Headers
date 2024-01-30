@interface SLActiveCallViewSwift : SLRemoteView {
    void /* unknown type, empty encoding */ activeCallSubscriber;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ hasActiveCall;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMaxWidth:(double)a0;
- (id)initWithServiceProxyClass:(Class)a0 maxWidth:(double)a1;
- (id)makePlaceholderSlotContentForStyle:(id)a0;
- (void)renderRemoteContentForLayerContextID:(long long)a0 style:(id)a1 yield:(id /* block */)a2;

@end
