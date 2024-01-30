@class NSURL, LPARAsset, UIView;

@interface LPARAssetView : LPComponentView {
    LPARAsset *_arAsset;
    UIView *_arAssetView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
}

@property (readonly, retain, nonatomic) NSURL *URL;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (id)initWithHost:(id)a0 ARAsset:(id)a1;

@end
