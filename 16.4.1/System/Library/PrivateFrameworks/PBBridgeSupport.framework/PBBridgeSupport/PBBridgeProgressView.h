@class UIImageView;

@interface PBBridgeProgressView : UIView

@property (retain, nonatomic) UIImageView *appleLogo;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long watchSize;
@property (nonatomic) double currentProgress;

- (struct CGSize { double x0; double x1; })_size;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithStyle:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)_tickLength;
- (id)initWithStyle:(unsigned long long)a0 andVersion:(unsigned long long)a1;
- (id)initWithStyle:(unsigned long long)a0 andVersion:(unsigned long long)a1 overrideSize:(unsigned long long)a2;

@end
