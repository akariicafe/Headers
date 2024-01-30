@class NSString, NSArray, UIView, NSObject;
@protocol NSSecureCoding, _WKFocusedElementInfo;

@interface WKFormInputSession : NSObject <_WKFormInputSession> {
    struct WeakObjCPtr<WKContentView> { id m_weakReference; } _contentView;
    struct RetainPtr<WKFocusedElementInfo> { void *m_ptr; } _focusedElementInfo;
    struct RetainPtr<UIView> { void *m_ptr; } _customInputView;
    struct RetainPtr<UIView> { void *m_ptr; } _customInputAccessoryView;
    struct RetainPtr<NSArray<UITextSuggestion *> > { void *m_ptr; } _suggestions;
    BOOL _accessoryViewShouldNotShow;
    BOOL _forceSecureTextEntry;
    BOOL _requiresStrongPasswordAssistance;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property (readonly, nonatomic) id<_WKFocusedElementInfo> focusedElementInfo;
@property (copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property (retain, nonatomic) UIView *customInputView;
@property (retain, nonatomic) UIView *customInputAccessoryView;
@property (copy, nonatomic) NSArray *suggestions;
@property (nonatomic) BOOL accessoryViewShouldNotShow;
@property (nonatomic) BOOL forceSecureTextEntry;
@property (readonly, nonatomic) BOOL requiresStrongPasswordAssistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reloadFocusedElementContextView;
- (id)initWithContentView:(id)a0 focusedElementInfo:(id)a1 requiresStrongPasswordAssistance:(BOOL)a2;
- (id).cxx_construct;
- (void)endEditing;
- (void)invalidate;

@end
