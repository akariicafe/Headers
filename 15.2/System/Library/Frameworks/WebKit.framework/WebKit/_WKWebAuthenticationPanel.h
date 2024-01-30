@class NSString, NSSet;
@protocol _WKWebAuthenticationPanelDelegate;

@interface _WKWebAuthenticationPanel : NSObject <WKObject> {
    struct ObjectStorage<API::WebAuthenticationPanel> { struct type { unsigned char __lx[88]; } data; } _panel;
    struct WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _client;
    struct RetainPtr<NSMutableSet> { void *m_ptr; } _transports;
}

@property (weak, nonatomic) id<_WKWebAuthenticationPanelDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *relyingPartyID;
@property (readonly, copy, nonatomic) NSSet *transports;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct PublicKeyCredentialCreationOptions { struct RpEntity { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x2; } x0; struct UserEntity { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x1; struct BufferSource { struct Variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __variant_data<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __variant_data<WTF::RefPtr<JSC::ArrayBufferView>> { struct __storage_wrapper<WTF::RefPtr<JSC::ArrayBufferView>> { struct type { unsigned char x0[8]; } x0; } x0; struct __dummy_type { } x1; } x0; union __variant_data<WTF::RefPtr<JSC::ArrayBuffer>> { struct __storage_wrapper<WTF::RefPtr<JSC::ArrayBuffer>> { struct type { unsigned char x0[8]; } x0; } x0; struct __dummy_type { } x1; } x1; } x0; char x1; } x0; } x2; struct Vector<unsigned char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { char *x0; unsigned int x1; unsigned int x2; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x4; } x1; struct BufferSource { struct Variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __variant_data<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __variant_data<WTF::RefPtr<JSC::ArrayBufferView>> { struct __storage_wrapper<WTF::RefPtr<JSC::ArrayBufferView>> { struct type { unsigned char x0[8]; } x0; } x0; struct __dummy_type { } x1; } x0; union __variant_data<WTF::RefPtr<JSC::ArrayBuffer>> { struct __storage_wrapper<WTF::RefPtr<JSC::ArrayBuffer>> { struct type { unsigned char x0[8]; } x0; } x0; struct __dummy_type { } x1; } x1; } x0; char x1; } x0; } x2; struct Vector<WebCore::PublicKeyCredentialCreationOptions::Parameters, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct Parameters *x0; unsigned int x1; unsigned int x2; } x3; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x4; struct Vector<WebCore::PublicKeyCredentialDescriptor, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct PublicKeyCredentialDescriptor *x0; unsigned int x1; unsigned int x2; } x5; struct optional<WebCore::PublicKeyCredentialCreationOptions::AuthenticatorSelectionCriteria> { union { char x0; struct AuthenticatorSelectionCriteria { struct optional<WebCore::AuthenticatorAttachment> { union { char x0; int x1; } x0; BOOL x1; } x0; BOOL x1; int x2; } x1; } x0; BOOL x1; } x6; int x7; struct optional<WebCore::AuthenticationExtensionsClientInputs> { union { char x0; struct AuthenticationExtensionsClientInputs { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; BOOL x1; } x1; } x0; BOOL x1; } x8; })convertToCoreCreationOptionsWithOptions:(id)a0;
+ (struct PublicKeyCredentialRequestOptions { struct BufferSource { struct Variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __variant_data<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __variant_data<WTF::RefPtr<JSC::ArrayBufferView>> { struct __storage_wrapper<WTF::RefPtr<JSC::ArrayBufferView>> { struct type { unsigned char x0[8]; } x0; } x0; struct __dummy_type { } x1; } x0; union __variant_data<WTF::RefPtr<JSC::ArrayBuffer>> { struct __storage_wrapper<WTF::RefPtr<JSC::ArrayBuffer>> { struct type { unsigned char x0[8]; } x0; } x0; struct __dummy_type { } x1; } x1; } x0; char x1; } x0; } x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x2; struct Vector<WebCore::PublicKeyCredentialDescriptor, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct PublicKeyCredentialDescriptor *x0; unsigned int x1; unsigned int x2; } x3; int x4; struct optional<WebCore::AuthenticatorAttachment> { union { char x0; int x1; } x0; BOOL x1; } x5; struct optional<WebCore::AuthenticationExtensionsClientInputs> { union { char x0; struct AuthenticationExtensionsClientInputs { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; BOOL x1; } x1; } x0; BOOL x1; } x6; })convertToCoreRequestOptionsWithOptions:(id)a0;
+ (id)getAllLocalAuthenticatorCredentials;
+ (id)getAllLocalAuthenticatorCredentialsWithAccessGroup:(id)a0;
+ (void)deleteLocalAuthenticatorCredentialWithID:(id)a0;
+ (void)clearAllLocalAuthenticatorCredentials;
+ (BOOL)isUserVerifyingPlatformAuthenticatorAvailable;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (id).cxx_construct;
- (void)setMockConfiguration:(id)a0;
- (void)makeCredentialWithChallenge:(id)a0 origin:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)getAssertionWithChallenge:(id)a0 origin:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;

@end
