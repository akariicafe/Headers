@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject {
    WebScriptCallFramePrivate *_private;
    id _userInfo;
}

- (id)functionName;
- (id)exception;
- (void)setUserInfo:(id)a0;
- (void)dealloc;
- (id)userInfo;
- (id)_convertValueToObjcValue:(struct JSValue { union EncodedValueDescriptor { long long x0; struct JSCell *x1; struct { int x0; int x1; } x2; } x0; })a0;
- (id)_initWithGlobalObject:(id)a0 functionName:(struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })a1 exceptionValue:(struct JSValue { union EncodedValueDescriptor { long long x0; struct JSCell *x1; struct { int x0; int x1; } x2; } x0; })a2;

@end
