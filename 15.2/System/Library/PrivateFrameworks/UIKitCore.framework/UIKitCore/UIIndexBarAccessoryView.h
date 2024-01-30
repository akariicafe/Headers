@class UIScrollView;
@protocol UIIndexBarAccessoryViewDelegate;

@interface UIIndexBarAccessoryView : UIIndexBarView <UIScrollAccessory>

@property (weak, nonatomic) id<UIIndexBarAccessoryViewDelegate> delegate;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long edge;
@property (readonly, nonatomic) BOOL overlay;

- (void)update;
- (void).cxx_destruct;
- (id)displayEntryNearestToContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setEntries:(id)a0;
- (BOOL)_selectEntry:(id)a0 atIndex:(long long)a1;

@end
