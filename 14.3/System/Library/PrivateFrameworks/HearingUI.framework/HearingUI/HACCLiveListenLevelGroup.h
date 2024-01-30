@class NSMutableArray;

@interface HACCLiveListenLevelGroup : UIView

@property (retain, nonatomic) NSMutableArray *levels;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLevel:(double)a0;

@end
