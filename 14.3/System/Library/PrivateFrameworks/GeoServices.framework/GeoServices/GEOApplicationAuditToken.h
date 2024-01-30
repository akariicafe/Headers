@class NSString, NSData, geo_isolater;

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding, GEOXPCSerializable> {
    NSData *_tokenData;
    NSString *_resolvedBundleId;
    NSString *_resolvedNetworkAttributionBundleId;
    geo_isolater *_isolater;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic, getter=_secondaryIdentifier) NSString *secondaryIdentifier;
@property (readonly, nonatomic) NSString *proxiedBundleId;
@property (readonly, nonatomic, getter=isProxiedExternalBundleId) BOOL proxiedExternalBundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentProcessAuditToken;

- (id)initWithXPCConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNSXPCConnection:(id)a0;
- (id)initWithAuditTokenData:(id)a0;
- (id)initWithSecondaryIdentifier:(id)a0;
- (id)publicLogDescription;
- (id)bundleId;
- (id)bundleIdForNetworkAttribution;
- (id)initWithCoder:(id)a0;
- (id)initWithProxiedApplicationBundleId:(id)a0;
- (id)backingTokenData;
- (BOOL)isEqual:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (id)_bundleIdForAuditToken;
- (id)initWithProxiedExternalApplicationBundleId:(id)a0;
- (void)encodeToXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
