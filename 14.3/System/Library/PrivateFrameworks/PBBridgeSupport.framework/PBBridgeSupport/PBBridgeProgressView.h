@class UIImageView;

@interface PBBridgeProgressView : UIView

@property (retain, nonatomic) UIImageView *appleLogo;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long version;
@property (nonatomic) double currentProgress;

- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_size;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_tickLength;
- (id)initWithStyle:(unsigned long long)a0 andVersion:(unsigned long long)a1;

@end
