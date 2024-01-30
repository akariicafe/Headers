@class NSArray, UIColor;
@protocol EKUIDividedGridViewControllerDelegate;

@interface EKUIDividedGridViewController : UIViewController {
    long long _type;
    UIColor *_cellBackgroundColor;
}

@property (retain) NSArray *allCells;
@property (retain) NSArray *weekViews;
@property (nonatomic) double preferredWidth;
@property (nonatomic) double preferredInset;
@property (retain, nonatomic) NSArray *buttonTitles;
@property (weak) id<EKUIDividedGridViewControllerDelegate> delegate;

+ (id)dividerColor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)cellTapped:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)_newDividerView;
- (double)_rowHeightForWidth:(double)a0;
- (double)_neededHeight;
- (id)initWithType:(long long)a0 buttonTitles:(id)a1 cellBackgroundColor:(id)a2;
- (void)viewWillLayoutSubviews;

@end
