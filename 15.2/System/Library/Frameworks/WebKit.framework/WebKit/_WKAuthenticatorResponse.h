@class NSData, _WKAuthenticationExtensionsClientOutputs;

@interface _WKAuthenticatorResponse : NSObject {
    struct RetainPtr<_WKAuthenticationExtensionsClientOutputs> { void *m_ptr; } _extensions;
}

@property (readonly, nonatomic) long long attachment;
@property (readonly, nonatomic) NSData *clientDataJSON;
@property (readonly, nonatomic) NSData *rawId;
@property (readonly, nonatomic) _WKAuthenticationExtensionsClientOutputs *extensions;

- (void).cxx_destruct;
- (id)initWithClientDataJSON:(id)a0 rawId:(id)a1 extensions:(void *)a2 attachment:(long long)a3;
- (id).cxx_construct;

@end
