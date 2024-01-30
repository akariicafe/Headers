@class NSArray, NSMutableArray;

@interface TPNumberPad : UIControl {
    NSMutableArray *_buttons;
}

@property (nonatomic) BOOL numberButtonsEnabled;
@property (retain) NSArray *buttons;
@property (nonatomic) double buttonBackgroundAlpha;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)buttons;
- (void)buttonCancelled:(id)a0;
- (void)buttonUpOutside:(id)a0;
- (void)dealloc;
- (void)buttonTapped:(id)a0;
- (void)buttonDown:(id)a0;
- (void)buttonUp:(id)a0;
- (id)initWithButtons:(id)a0;
- (void)buttonLongPressed:(id)a0;
- (void)setButtons:(id)a0;
- (void)replaceButton:(id)a0 atIndex:(unsigned long long)a1;
- (void)_addButton:(id)a0;
- (void)_layoutGrid;
- (void)handleCurrentLocaleDidChangeNotification:(id)a0;
- (void)buttonLongPressedViaGesture:(id)a0;

@end
