@class DOCLargeTagView, DOCTag;

@interface DOCTagEditorTagCell : UICollectionViewCell

@property (retain, nonatomic) DOCLargeTagView *tagView;
@property (retain, nonatomic) DOCTag *tagValue;
@property (nonatomic) BOOL mixedSelection;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)tagValue;
- (void)updateStyle;
- (void)setTagValue:(id)a0;

@end
