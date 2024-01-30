@class UIView;

@interface CKDetailsSeparatorCell : CKDetailsCell

@property (nonatomic) double leadingSpace;
@property (nonatomic) BOOL indentSeparator;
@property (readonly, nonatomic) UIView *separatorView;

+ (double)defaultHeight;
+ (double)defaultLeadingSpace;
+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
