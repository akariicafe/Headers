@interface _UIVerticalEdgeShadowView : _UIShadowView

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) unsigned long long edge;

- (void)layoutSubviews;
- (id)initWithWidth:(double)a0 edge:(unsigned long long)a1;
- (void)_loadImageIfNecessary;

@end
