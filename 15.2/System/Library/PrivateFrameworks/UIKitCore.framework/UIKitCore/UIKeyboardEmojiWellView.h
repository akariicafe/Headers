@class UIFont, NSArray, NSString, UIColor, UILabel, UIView, NSIndexPath;

@interface UIKeyboardEmojiWellView : UIView

@property (retain, nonatomic) UILabel *unreleasedBanner;
@property (retain, nonatomic) UIView *wellContentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct CGSize { double width; double height; } compositeImageSize;
@property (retain, nonatomic) NSArray *compositeImageRepresentation;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) NSString *stringRepresentation;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isActiveSelection) BOOL activeSelection;
@property (retain, nonatomic) UIColor *selectionBackgroundColor;
@property (retain, nonatomic) NSIndexPath *associatedIndexPath;
@property (nonatomic) BOOL unreleasedHighlight;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)fontUsingSilhouette:(unsigned long long)a0 size:(double)a1;
- (void)setStringRepresentation:(id)a0 silhouette:(unsigned long long)a1;
- (void).cxx_destruct;

@end
