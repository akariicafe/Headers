@class UIView;

@interface CKDetailsSeparatorCell : CKDetailsCell

@property (nonatomic) double leadingSpace;
@property (nonatomic) BOOL indentSeparator;
@property (readonly, nonatomic) UIView *separatorView;

+ (double)defaultLeadingSpace;
+ (id)reuseIdentifier;
+ (double)defaultHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
