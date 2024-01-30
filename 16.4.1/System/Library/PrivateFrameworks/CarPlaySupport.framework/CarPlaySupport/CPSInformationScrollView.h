@class NSMutableArray;
@protocol CPSInformationScrollViewDelegate;

@interface CPSInformationScrollView : UIScrollView

@property (weak, nonatomic) id<CPSInformationScrollViewDelegate> scrollviewDelegate;
@property (retain, nonatomic) NSMutableArray *focusWaypoints;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
