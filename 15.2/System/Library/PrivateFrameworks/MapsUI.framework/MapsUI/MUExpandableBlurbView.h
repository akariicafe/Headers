@class NSString, MKExpandingLabel;

@interface MUExpandableBlurbView : UIView {
    MKExpandingLabel *_expandingLabel;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ moreAction;
@property (copy, nonatomic) id /* block */ resizeBlock;
@property (nonatomic) unsigned long long numberOfLinesWhenCollapsed;

- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_expand;
- (void)_setupLabel;
- (void).cxx_destruct;
- (void)infoCardThemeChanged;

@end
