@class WKWebProcessPlugInNodeHandle, NSString;

@interface SFFormAutoFillNode : NSObject <WBSFormAutoFillNode>

@property (readonly, nonatomic) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoFillNodeWithNodeHandle:(id)a0;

- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithNodeHandle:(id)a0;
- (id)initWithJSWrapper:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (void)setHTMLInputElementAutofilled:(BOOL)a0;
- (BOOL)isHTMLInputElementUserEdited;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })elementBounds;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;

@end
