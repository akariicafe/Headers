@protocol MULayoutItem;

@interface MUSizeLayoutInternal : MUConstraintLayoutInternal {
    void /* unknown type, empty encoding */ builder;
}

@property (class, nonatomic, readonly) double useIntrinsicContentSize;

@property (nonatomic, weak) id<MULayoutItem> item;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) float priority;

- (id)initWithItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 priority:(float)a2;
- (id)initWithItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
