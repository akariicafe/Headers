@class NSString, MKExpandingLabel;

@interface MKPlaceTextBlockCell : MKPlaceSectionRowView

@property (retain, nonatomic) MKExpandingLabel *textBlock;
@property (nonatomic) BOOL constraintsAdded;
@property (copy, nonatomic) NSString *textBlockText;
@property (nonatomic, getter=isTextBlockExpanded) BOOL textBlockExpanded;
@property (copy, nonatomic) id /* block */ textBlockResizedBlock;

- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)infoCardThemeChanged;

@end
