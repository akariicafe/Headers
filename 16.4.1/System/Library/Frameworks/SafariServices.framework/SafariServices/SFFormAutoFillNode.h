@class WKWebProcessPlugInNodeHandle, NSString;

@interface SFFormAutoFillNode : NSObject <WBSFormAutoFillNode>

@property (readonly, nonatomic) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoFillNodeWithNodeHandle:(id)a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })elementBounds;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (id)initWithJSWrapper:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (id)initWithNodeHandle:(id)a0;
- (BOOL)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutoFilledAndObscured:(BOOL)a0;
- (void)setHTMLInputElementAutoFilledAndViewable:(BOOL)a0;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(BOOL)a0;
- (void)setHTMLInputElementAutofilled:(BOOL)a0;
- (void)setSpinnerVisibilityOnHTMLInputElement:(BOOL)a0;

@end
