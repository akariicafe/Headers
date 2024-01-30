@interface _UIVerticalEdgeShadowView : _UIShadowView

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) unsigned long long edge;

- (void)_loadImageIfNecessary;
- (id)initWithWidth:(double)a0 edge:(unsigned long long)a1;
- (void)layoutSubviews;

@end
