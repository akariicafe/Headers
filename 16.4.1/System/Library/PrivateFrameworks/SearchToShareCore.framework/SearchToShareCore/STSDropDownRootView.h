@class NSMutableArray, UIView;

@interface STSDropDownRootView : UIView {
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) UIView *contentView;

- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
