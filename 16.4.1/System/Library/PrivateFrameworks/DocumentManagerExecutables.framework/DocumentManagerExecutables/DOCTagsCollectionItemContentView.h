@class NSArray, NSString, UILabel, DOCTag, UIMenu;
@protocol DOCTagsCollectionItemContentViewDelegate;

@interface DOCTagsCollectionItemContentView : UIView <DOCTagsCollectionCellMenuTarget>

@property (readonly, nonatomic) UILabel *tagNameLabel;
@property (copy, nonatomic) DOCTag *tagValue;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) id<DOCTagsCollectionItemContentViewDelegate> delegate;
@property (readonly, nonatomic) id menuPresentationIdentity;
@property (readonly, nonatomic) NSArray *menuItemsForCalloutBarPresentation;
@property (readonly, nonatomic) UIMenu *menuForContextMenuPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateColors;
- (void)updateAttributedString;
- (void)removeTag:(id)a0;
- (double)_contentHorizontalInset;
- (double)_tagToTitleSpacing;
- (BOOL)canPerformCalloutBarAction:(SEL)a0;
- (id)fontForTagSizing;
- (double)tagLayoutWidth;

@end
