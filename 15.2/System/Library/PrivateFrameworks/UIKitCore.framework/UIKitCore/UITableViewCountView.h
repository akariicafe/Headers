@class NSString;

@interface UITableViewCountView : UILabel {
    NSString *_countString;
    int _count;
}

- (void)setCountString:(id)a0 withCount:(long long)a1;
- (void).cxx_destruct;
- (long long)count;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCountString:(id)a1 withCount:(long long)a2;
- (void)setCount:(long long)a0;

@end
