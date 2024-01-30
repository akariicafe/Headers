@class NSString, NSObject;
@protocol NSSecureCoding;

@interface WKFocusedElementInfo : NSObject <_WKFocusedElementInfo> {
    long long _type;
    struct RetainPtr<NSString> { void *m_ptr; } _value;
    BOOL _isUserInitiated;
    struct RetainPtr<NSObject<NSSecureCoding>> { void *m_ptr; } _userObject;
    struct RetainPtr<NSString> { void *m_ptr; } _placeholder;
    struct RetainPtr<NSString> { void *m_ptr; } _label;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *placeholder;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFocusedElementInformation:(const void *)a0 isUserInitiated:(BOOL)a1 userObject:(id)a2;

@end
