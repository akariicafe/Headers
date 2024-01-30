@class NSString;

@interface UITableViewCountView : UILabel {
    NSString *_countString;
    int _count;
}

- (void)setCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCountString:(id)a1 withCount:(long long)a2;
- (long long)count;
- (void)setCountString:(id)a0 withCount:(long long)a1;

@end
