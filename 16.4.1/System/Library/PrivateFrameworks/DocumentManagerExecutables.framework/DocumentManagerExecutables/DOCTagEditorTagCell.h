@class DOCLargeTagView, DOCTag, _TtC26DocumentManagerExecutables24DOCHoverEffectController;

@interface DOCTagEditorTagCell : UICollectionViewCell

@property (retain, nonatomic) DOCLargeTagView *tagView;
@property (retain, nonatomic) _TtC26DocumentManagerExecutables24DOCHoverEffectController *hoverEffectController;
@property (retain, nonatomic) DOCTag *tagValue;
@property (nonatomic) BOOL mixedSelection;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateStyle;
- (void).cxx_destruct;
- (id)tagValue;
- (void)setTagValue:(id)a0;

@end
