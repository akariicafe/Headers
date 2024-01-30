@class DOCTagDotView, UITextField, CAShapeLayer, UILabel, NSString;
@protocol DOCAddTagTextFieldDelegate;

@interface DOCAddTagView : UIView <UITextFieldDelegate, UIScribbleInteractionDelegate>

@property (readonly, nonatomic) DOCTagDotView *tagDotView;
@property (readonly, nonatomic) UILabel *addNewTagLabel;
@property (readonly, nonatomic) UITextField *tagNameTextField;
@property (readonly, nonatomic) CAShapeLayer *borderLayer;
@property (weak, nonatomic) id<DOCAddTagTextFieldDelegate> delegate;
@property (readonly, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)commit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)scribbleInteractionShouldDelayFocus:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)scribbleInteractionWillBeginWriting:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)cancel;
- (void)updateBorderAttributes;
- (void)updateBorderPath;

@end
