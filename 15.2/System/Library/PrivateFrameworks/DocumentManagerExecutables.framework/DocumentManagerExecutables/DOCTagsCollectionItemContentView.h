@class UIFont, NSArray, NSString, UILabel, DOCTag;
@protocol DOCTagsCollectionItemContentViewDelegate;

@interface DOCTagsCollectionItemContentView : UIView <DOCTagsCollectionCellMenuTarget>

@property (readonly, nonatomic) UILabel *tagNameLabel;
@property (copy, nonatomic) DOCTag *tagValue;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) id<DOCTagsCollectionItemContentViewDelegate> delegate;
@property (readonly, nonatomic) id menuPresentationIdentity;
@property (readonly, nonatomic) NSArray *menuItemsForCalloutBarPresentation;
@property (readonly, nonatomic) NSArray *menuItemsForContextMenuPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateColors;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateAttributedString;
- (void)removeTag:(id)a0;
- (BOOL)canPerformCalloutBarAction:(SEL)a0;
- (double)_contentHorizontalInset;
- (id)fontForTagSizing;
- (double)tagLayoutWidth;
- (double)_tagToTitleSpacing;

@end
