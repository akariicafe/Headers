@class NSString;

@interface _WKElementAction : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _title;
    id /* block */ _actionHandler;
    struct WeakObjCPtr<WKActionSheetAssistant> { id m_weakReference; } _defaultActionSheetAssistant;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ dismissalHandler;

+ (id)imageForElementActionType:(long long)a0;
+ (id)elementActionWithType:(long long)a0 customTitle:(id)a1;
+ (id)_elementActionWithType:(long long)a0 title:(id)a1 actionHandler:(id /* block */)a2;
+ (id)_elementActionWithType:(long long)a0 customTitle:(id)a1 assistant:(id)a2;
+ (id)elementActionWithTitle:(id)a0 actionHandler:(id /* block */)a1;
+ (id)elementActionWithType:(long long)a0 title:(id)a1 actionHandler:(id /* block */)a2;
+ (id)_elementActionWithType:(long long)a0 assistant:(id)a1;
+ (id)elementActionWithType:(long long)a0;
+ (long long)elementActionTypeForUIActionIdentifier:(id)a0;

- (void)runActionWithElementInfo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)_initWithTitle:(id)a0 actionHandler:(id /* block */)a1 type:(long long)a2 assistant:(id)a3;
- (void)_runActionWithElementInfo:(id)a0 forActionSheetAssistant:(id)a1;
- (id)uiActionForElementInfo:(id)a0;

@end
