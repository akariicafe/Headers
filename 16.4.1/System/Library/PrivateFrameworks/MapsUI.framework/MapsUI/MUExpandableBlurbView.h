@class NSString, MUExpandingLabel;

@interface MUExpandableBlurbView : UIView {
    MUExpandingLabel *_expandingLabel;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ moreAction;
@property (copy, nonatomic) id /* block */ resizeBlock;
@property (nonatomic) unsigned long long numberOfLinesWhenCollapsed;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupLabel;
- (void)infoCardThemeChanged;
- (void)_expand;

@end
