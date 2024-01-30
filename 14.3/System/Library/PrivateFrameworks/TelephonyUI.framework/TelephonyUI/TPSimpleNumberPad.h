@class UIButton;
@protocol TPSimpleNumberPadDelegate;

@interface TPSimpleNumberPad : TPNumberPad {
    UIButton *_deleteButton;
}

@property id<TPSimpleNumberPadDelegate> delegate;
@property (nonatomic) BOOL showsDeleteButton;

+ (id)_numberPadCharacters;

- (void).cxx_destruct;
- (void)buttonUp:(id)a0;
- (id)initWithButtons:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateDeleteButton;
- (Class)numberPadButtonClass;
- (void)setNumberButtonsEnabled:(BOOL)a0;
- (void)_deleteButtonClicked:(id)a0 withEvent:(id)a1;

@end
