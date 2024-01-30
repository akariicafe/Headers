@class UIColor, NSMutableArray, CLKDevice;

@interface NTKPageDotsView : UIView

@property (readonly, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NSMutableArray *pageDots;
@property (nonatomic) unsigned long long numberOfPages;
@property (nonatomic) unsigned long long currentPage;
@property (retain, nonatomic) UIColor *currentPageColor;
@property (retain, nonatomic) UIColor *otherPageColor;
@property (nonatomic) double dotDiameter;
@property (nonatomic) double dotPadding;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initForDevice:(id)a0;
- (void)applyDefaultConfiguration;
- (id)makePageDot;
- (void)_regenerateDots;

@end
