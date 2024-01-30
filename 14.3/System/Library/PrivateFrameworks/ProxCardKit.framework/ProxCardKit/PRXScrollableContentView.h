@class UIScrollView, NSLayoutConstraint;

@interface PRXScrollableContentView : PRXCardContentView

@property (retain, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint;
@property (readonly, nonatomic) UIScrollView *scrollView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithCardStyle:(long long)a0;
- (id)initWithCardStyle:(long long)a0 scrollView:(id)a1;

@end
