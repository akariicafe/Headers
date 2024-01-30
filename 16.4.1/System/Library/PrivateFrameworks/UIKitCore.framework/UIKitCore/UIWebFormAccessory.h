@class UIBarButtonItemGroup, UIToolbar, UISegmentedControl, UIBarButtonItem;
@protocol UIWebFormAccessoryDelegate;

@interface UIWebFormAccessory : UIInputView {
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_flexibleSpaceItem;
    UIBarButtonItem *_previousItem;
    UIBarButtonItem *_nextItem;
    UIBarButtonItem *_nextPreviousSpacer;
    UIBarButtonItem *_autofillSpacer;
    UIBarButtonItemGroup *_buttonGroupAutoFill;
    UIBarButtonItemGroup *_buttonGroupNavigation;
    BOOL _usesUCB;
}

@property (retain, nonatomic) UISegmentedControl *_tab;
@property (retain, nonatomic) UIBarButtonItem *_autofill;
@property (retain, nonatomic) UIBarButtonItem *_clearButton;
@property (weak, nonatomic) id<UIWebFormAccessoryDelegate> delegate;
@property (nonatomic, getter=isNextEnabled) BOOL nextEnabled;
@property (nonatomic, getter=isPreviousEnabled) BOOL previousEnabled;

+ (id)toolbarWithItems:(id)a0;

- (void)_setRenderConfig:(id)a0;
- (void)_orientationDidChange:(id)a0;
- (void)done:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)clear:(id)a0;
- (void).cxx_destruct;
- (id)_autoFillButton;
- (void)_applyTreatmentToAutoFillLabel;
- (void)_nextTapped:(id)a0;
- (void)_previousTapped:(id)a0;
- (void)_refreshAutofillPresentation;
- (void)_updateFrame;
- (void)autoFill:(id)a0;
- (void)hideAutoFillButton;
- (void)initForUCB:(id)a0;
- (id)initWithInputAssistantItem:(id)a0;
- (void)setClearVisible:(BOOL)a0;
- (void)setNextPreviousItemsVisible:(BOOL)a0;
- (void)showAutoFillButton;
- (void)showAutoFillButtonWithTitle:(id)a0;

@end
