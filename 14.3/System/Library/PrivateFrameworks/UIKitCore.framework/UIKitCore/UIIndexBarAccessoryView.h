@class UIScrollView;
@protocol UIIndexBarAccessoryViewDelegate;

@interface UIIndexBarAccessoryView : UIIndexBarView <UIScrollAccessory>

@property (weak, nonatomic) id<UIIndexBarAccessoryViewDelegate> delegate;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long edge;
@property (readonly, nonatomic) BOOL overlay;

- (void)setEntries:(id)a0;
- (void).cxx_destruct;
- (void)update;
- (BOOL)_selectEntry:(id)a0 atIndex:(long long)a1;
- (id)displayEntryNearestToContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
