@class UIView;

@interface CKDetailsSeparatorCell : CKDetailsCell

@property (nonatomic) double leadingSpace;
@property (nonatomic) BOOL indentSeparator;
@property (readonly, nonatomic) UIView *separatorView;

+ (double)defaultHeight;
+ (id)reuseIdentifier;
+ (double)defaultLeadingSpace;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
