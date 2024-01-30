@class NSString, NSSet;
@protocol _WKWebAuthenticationPanelDelegate;

@interface _WKWebAuthenticationPanel : NSObject <WKObject> {
    struct ObjectStorage<API::WebAuthenticationPanel> { struct type { unsigned char __lx[88]; } data; } _panel;
    struct WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _client;
    struct RetainPtr<NSMutableSet> { void *m_ptr; } _transports;
}

@property (weak, nonatomic) id<_WKWebAuthenticationPanelDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *relyingPartyID;
@property (readonly, copy, nonatomic) NSSet *transports;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAllLocalAuthenticatorCredentialsWithRPIDAndAccessGroup:(id)a0 rpID:(id)a1;
+ (void)clearAllLocalAuthenticatorCredentials;
+ (struct PublicKeyCredentialCreationOptions { struct RpEntity { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x1; struct optional<WTF::String> { union { char x0; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x1; } x0; BOOL x1; } x2; } x0; struct UserEntity { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x1; struct BufferSource { struct variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { struct __impl<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<0UL, WTF::RefPtr<JSC::ArrayBufferView>> { struct RefPtr<JSC::ArrayBufferView, WTF::RawPtrTraits<JSC::ArrayBufferView>, WTF::DefaultRefDerefTraits<JSC::ArrayBufferView>> { struct ArrayBufferView *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<1UL, WTF::RefPtr<JSC::ArrayBuffer>> { struct RefPtr<JSC::ArrayBuffer, WTF::RawPtrTraits<JSC::ArrayBuffer>, WTF::DefaultRefDerefTraits<JSC::ArrayBuffer>> { struct ArrayBuffer *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x0; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x3; } x1; struct BufferSource { struct variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { struct __impl<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<0UL, WTF::RefPtr<JSC::ArrayBufferView>> { struct RefPtr<JSC::ArrayBufferView, WTF::RawPtrTraits<JSC::ArrayBufferView>, WTF::DefaultRefDerefTraits<JSC::ArrayBufferView>> { struct ArrayBufferView *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<1UL, WTF::RefPtr<JSC::ArrayBuffer>> { struct RefPtr<JSC::ArrayBuffer, WTF::RawPtrTraits<JSC::ArrayBuffer>, WTF::DefaultRefDerefTraits<JSC::ArrayBuffer>> { struct ArrayBuffer *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x0; } x2; struct Vector<WebCore::PublicKeyCredentialCreationOptions::Parameters, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct Parameters *x0; unsigned int x1; unsigned int x2; } x3; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x4; struct Vector<WebCore::PublicKeyCredentialDescriptor, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct PublicKeyCredentialDescriptor *x0; unsigned int x1; unsigned int x2; } x5; struct optional<WebCore::PublicKeyCredentialCreationOptions::AuthenticatorSelectionCriteria> { union { char x0; struct AuthenticatorSelectionCriteria { struct optional<WebCore::AuthenticatorAttachment> { union { char x0; unsigned char x1; } x0; BOOL x1; } x0; struct optional<WebCore::ResidentKeyRequirement> { union { char x0; unsigned char x1; } x0; BOOL x1; } x1; BOOL x2; unsigned char x3; } x1; } x0; BOOL x1; } x6; unsigned char x7; struct optional<WebCore::AuthenticationExtensionsClientInputs> { union { char x0; struct AuthenticationExtensionsClientInputs { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; BOOL x1; BOOL x2; } x1; } x0; BOOL x1; } x8; })convertToCoreCreationOptionsWithOptions:(id)a0;
+ (struct PublicKeyCredentialRequestOptions { struct BufferSource { struct variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { struct __impl<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<0UL, WTF::RefPtr<JSC::ArrayBufferView>> { struct RefPtr<JSC::ArrayBufferView, WTF::RawPtrTraits<JSC::ArrayBufferView>, WTF::DefaultRefDerefTraits<JSC::ArrayBufferView>> { struct ArrayBufferView *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<1UL, WTF::RefPtr<JSC::ArrayBuffer>> { struct RefPtr<JSC::ArrayBuffer, WTF::RawPtrTraits<JSC::ArrayBuffer>, WTF::DefaultRefDerefTraits<JSC::ArrayBuffer>> { struct ArrayBuffer *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x0; } x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x2; struct Vector<WebCore::PublicKeyCredentialDescriptor, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct PublicKeyCredentialDescriptor *x0; unsigned int x1; unsigned int x2; } x3; unsigned char x4; struct optional<WebCore::AuthenticationExtensionsClientInputs> { union { char x0; struct AuthenticationExtensionsClientInputs { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; BOOL x1; BOOL x2; } x1; } x0; BOOL x1; } x5; struct optional<WebCore::AuthenticatorAttachment> { union { char x0; unsigned char x1; } x0; BOOL x1; } x6; })convertToCoreRequestOptionsWithOptions:(id)a0;
+ (void)deleteLocalAuthenticatorCredentialWithGroupAndID:(id)a0 credential:(id)a1;
+ (void)deleteLocalAuthenticatorCredentialWithID:(id)a0;
+ (id)encodeGetAssertionCommandWithClientDataHash:(id)a0 options:(id)a1 userVerificationAvailability:(long long)a2;
+ (id)encodeGetAssertionCommandWithClientDataJSON:(id)a0 options:(id)a1 userVerificationAvailability:(long long)a2;
+ (id)encodeMakeCredentialCommandWithClientDataHash:(id)a0 options:(id)a1 userVerificationAvailability:(long long)a2;
+ (id)encodeMakeCredentialCommandWithClientDataJSON:(id)a0 options:(id)a1 userVerificationAvailability:(long long)a2;
+ (id)exportLocalAuthenticatorCredentialWithGroupAndID:(id)a0 credential:(id)a1 error:(id *)a2;
+ (id)exportLocalAuthenticatorCredentialWithID:(id)a0 error:(id *)a1;
+ (id)getAllLocalAuthenticatorCredentials;
+ (id)getAllLocalAuthenticatorCredentialsWithAccessGroup:(id)a0;
+ (id)getAllLocalAuthenticatorCredentialsWithCredentialID:(id)a0;
+ (id)getAllLocalAuthenticatorCredentialsWithCredentialIDAndAccessGroup:(id)a0 credentialID:(id)a1;
+ (id)getAllLocalAuthenticatorCredentialsWithRPID:(id)a0;
+ (id)getClientDataJSONForAuthenticationType:(long long)a0 challenge:(id)a1 origin:(id)a2;
+ (id)importLocalAuthenticatorCredential:(id)a0 error:(id *)a1;
+ (id)importLocalAuthenticatorWithAccessGroup:(id)a0 credential:(id)a1 error:(id *)a2;
+ (BOOL)isUserVerifyingPlatformAuthenticatorAvailable;
+ (void)setDisplayNameForLocalCredentialWithGroupAndID:(id)a0 credential:(id)a1 displayName:(id)a2;
+ (void)setNameForLocalCredentialWithGroupAndID:(id)a0 credential:(id)a1 name:(id)a2;

- (id).cxx_construct;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)getAssertionWithChallenge:(id)a0 origin:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)getAssertionWithClientDataHash:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAssertionWithMediationRequirement:(long long)a0 clientDataHash:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)makeCredentialWithChallenge:(id)a0 origin:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)makeCredentialWithClientDataHash:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)makeCredentialWithMediationRequirement:(long long)a0 clientDataHash:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)setMockConfiguration:(id)a0;

@end
