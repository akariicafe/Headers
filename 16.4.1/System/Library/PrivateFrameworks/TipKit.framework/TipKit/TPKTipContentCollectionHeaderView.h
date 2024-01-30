@class TPKContentView;

@interface TPKTipContentCollectionHeaderView : UICollectionReusableView <TPKTipContentReusableView>

@property (nonatomic, retain) void /* unknown type, empty encoding */ tipView;
@property (nonatomic, readonly) TPKContentView *tipContentView;

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0 contentController:(id)a1;

@end
