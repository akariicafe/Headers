@class DOCTagDotView, UITextField, CAShapeLayer, UILabel, NSArray, NSString;
@protocol DOCAddTagTextFieldDelegate;

@interface DOCAddTagView : UIView <UITextFieldDelegate, UIScribbleInteractionDelegate>

@property (readonly, nonatomic) DOCTagDotView *tagDotView;
@property (readonly, nonatomic) UILabel *addNewTagLabel;
@property (readonly, nonatomic) UITextField *tagNameTextField;
@property (readonly, nonatomic) CAShapeLayer *backgroundShapeLayer;
@property (readonly, nonatomic) NSArray *notificationObservances;
@property (weak, nonatomic) id<DOCAddTagTextFieldDelegate> delegate;
@property (readonly, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidEndEditing:(id)a0;
- (void)scribbleInteractionWillBeginWriting:(id)a0;
- (void)commit;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancel;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)scribbleInteractionShouldDelayFocus:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)setShowingAddNewTagLabel:(BOOL)a0;
- (void)updateBorderAttributes;
- (void)updateBorderPath;

@end
