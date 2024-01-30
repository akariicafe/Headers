@class NSMutableArray;

@interface MCLVariantGroupView : UIView {
    NSMutableArray *_buttons;
    NSMutableArray *_buttonConstraints;
    long long _selectedIndex;
}

@property (retain, nonatomic) Class buttonClass;
@property (nonatomic) long long buttonType;
@property (nonatomic) long long variantCount;
@property (nonatomic) long long variantsPerLine;
@property (nonatomic) BOOL actionVariant;

- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)clearVariants;
- (id)createVariantButton:(Class)a0 type:(long long)a1;
- (void)selectItemAtIndex:(long long)a0;
- (void)selectVariant:(id)a0;

@end
