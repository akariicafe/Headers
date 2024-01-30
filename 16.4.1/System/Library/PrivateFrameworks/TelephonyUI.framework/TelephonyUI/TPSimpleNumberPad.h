@class UIButton;
@protocol TPSimpleNumberPadDelegate;

@interface TPSimpleNumberPad : TPNumberPad {
    UIButton *_deleteButton;
}

@property id<TPSimpleNumberPadDelegate> delegate;
@property (nonatomic) BOOL showsDeleteButton;

+ (id)_numberPadCharacters;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)buttonUp:(id)a0;
- (void).cxx_destruct;
- (void)_updateDeleteButton;
- (id)initWithButtons:(id)a0;
- (void)_deleteButtonClicked:(id)a0 withEvent:(id)a1;
- (Class)numberPadButtonClass;
- (void)setNumberButtonsEnabled:(BOOL)a0;

@end
