@class EMKEmojiTokenList;

@interface EMKOverlayView : UIView {
    unsigned long long _numEmojiToShow;
    EMKEmojiTokenList *_emojiTokenList;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _overlayRect;
    unsigned long long _selectedIndex;
    id /* block */ _selectionHandler;
    long long _interfaceStyle;
}

- (void)dismiss;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)drawForeground:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawBackground:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissWithSelectedEmojiToken:(id)a0;
- (id)initWithView:(id)a0 anchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 emojiTokenList:(id)a2 selectionHandler:(id /* block */)a3;
- (void)selectWithEvent:(id)a0;
- (void)setView:(id)a0 anchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
