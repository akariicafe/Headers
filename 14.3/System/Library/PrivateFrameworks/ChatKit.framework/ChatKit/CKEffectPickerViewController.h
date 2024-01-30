@class NSAttributedString, CKEffectPickerView;
@protocol CKEffectPickerViewControllerDelegate;

@interface CKEffectPickerViewController : UIViewController <CKEffectPickerViewDelegate, CKEffectPickerViewControllerProtocol>

@property (copy, nonatomic) NSAttributedString *text;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sendButtonFrame;
@property (nonatomic) struct CGPoint { double x; double y; } balloonViewOrigin;
@property (retain, nonatomic) CKEffectPickerView *pickerView;
@property (nonatomic) id<CKEffectPickerViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateHintTransition:(double)a0;
- (void)handleTouchUp:(struct CGPoint { double x0; double x1; })a0;
- (void)handleTouchMoved:(struct CGPoint { double x0; double x1; })a0;
- (void)updateColor:(char)a0;
- (void)presentPicker;
- (void)setCloseButtonYPosition:(double)a0;
- (id)initWithComposition:(id)a0 sendButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 balloonViewOrigin:(struct CGPoint { double x0; double x1; })a2 color:(char)a3;
- (void)setSemanticContentAttribute:(id)a0 forceLTR:(BOOL)a1;
- (void)effectSelectedWithIdentifier:(id)a0;
- (void)touchUpInsideCloseButton;
- (void)effectPickerViewDidFinishAnimatingIn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setShowingInStandAloneWindow:(BOOL)a0;

@end
