@class NSArray, NSMutableArray;

@interface TPNumberPad : UIControl {
    NSMutableArray *_buttons;
}

@property (nonatomic) BOOL numberButtonsEnabled;
@property (retain) NSArray *buttons;
@property (nonatomic) double buttonBackgroundAlpha;

- (void)buttonDown:(id)a0;
- (void)buttonTapped:(id)a0;
- (void)setButtons:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)buttonUpOutside:(id)a0;
- (void)dealloc;
- (id)buttons;
- (void)buttonUp:(id)a0;
- (void)buttonLongPressed:(id)a0;
- (void).cxx_destruct;
- (void)buttonCancelled:(id)a0;
- (id)initWithButtons:(id)a0;
- (void)_addButton:(id)a0;
- (void)_layoutGrid;
- (void)buttonLongPressedViaGesture:(id)a0;
- (void)handleCurrentLocaleDidChangeNotification:(id)a0;
- (void)replaceButton:(id)a0 atIndex:(unsigned long long)a1;

@end
