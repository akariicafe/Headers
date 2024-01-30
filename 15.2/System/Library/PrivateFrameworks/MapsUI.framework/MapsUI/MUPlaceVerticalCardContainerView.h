@class NSString, MUPlaceVerticalCardConfiguration, UIView, UILongPressGestureRecognizer;
@protocol MUPlaceVerticalCardContainerViewDelegate;

@interface MUPlaceVerticalCardContainerView : MUStackView <UIGestureRecognizerDelegate> {
    unsigned long long _trackingSelectForRow;
    UIView *_selectedRow;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MUPlaceVerticalCardConfiguration *_configuration;
}

@property (weak, nonatomic) id<MUPlaceVerticalCardContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleLongPress:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)removeArrangedSubview:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_menuDismissed:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setRowViews:(id)a0;
- (unsigned long long)_indexOfRowAt:(struct CGPoint { double x0; double x1; })a0;
- (id)_rowAt:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithShowsSeparators:(BOOL)a0;

@end
