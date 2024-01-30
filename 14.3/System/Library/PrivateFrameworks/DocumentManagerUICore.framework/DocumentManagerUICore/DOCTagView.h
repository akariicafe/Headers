@class UIFont, NSString, UILabel, DOCTag;
@protocol DOCTagViewDelegate;

@interface DOCTagView : UIView <UIContextMenuInteractionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UILabel *tagNameLabel;
@property (copy, nonatomic) DOCTag *tagValue;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) id<DOCTagViewDelegate> delegate;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)updateColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)longPressGestureRecognizer:(id)a0;
- (void)removeTag:(id)a0;

@end
