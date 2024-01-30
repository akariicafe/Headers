@class PKHashtagItem, UIView;
@protocol PKHashtagViewDelegate;

@interface PKHashtagView : PKDetectionView

@property (retain, nonatomic) UIView *blankPreviewView;
@property (readonly, nonatomic) PKHashtagItem *hashtagItem;
@property (weak, nonatomic) id<PKHashtagViewDelegate> delegate;

- (id)accessibilityIdentifier;
- (id)item;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)_underlineColor;
- (double)_underlineThickness;
- (id)initWithHashtagItem:(id)a0 inDrawing:(id)a1;
- (void)updateActivationState;

@end
