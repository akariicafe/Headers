@class NSString, WFAction, UIImage, _scopeHandle, CKComponentScopeHandle;

@interface WFModuleOutputModel : NSObject

@property (readonly, nonatomic) WFAction *action;
@property (readonly, nonatomic, getter=isExtensionInput) BOOL extensionInput;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) struct CKTypedComponentAction<WFModuleOutputModel *> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } tapAction;

+ (id)modelForAction:(id)a0 withTapAction:(struct CKTypedComponentAction<WFModuleOutputModel *> { unsigned long long x0; id x1; id x2; SEL x3; })a1;
+ (id)modelForExtensionInputWithTapAction:(struct CKTypedComponentAction<WFModuleOutputModel *> { unsigned long long x0; id x1; id x2; SEL x3; })a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAction:(id)a0 tapAction:(struct CKTypedComponentAction<WFModuleOutputModel *> { unsigned long long x0; id x1; id x2; SEL x3; })a1;
- (id)initWithExtensionInputAndTapAction:(struct CKTypedComponentAction<WFModuleOutputModel *> { unsigned long long x0; id x1; id x2; SEL x3; })a0;

@end
