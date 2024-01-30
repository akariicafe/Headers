@class NSMutableDictionary, NSDictionary, PKZeroingDataContainer, NSArray;

@interface PKOverlayableWebServiceRequest : PKWebServiceRequest <NSSecureCoding> {
    NSMutableDictionary *_overlayParameters;
    NSMutableDictionary *_secureOverlayParameters;
    NSArray *_overridenKeys;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKZeroingDataContainer *archivedData;
@property (copy, nonatomic) NSDictionary *overlayParameters;
@property (copy, nonatomic) NSDictionary *secureOverlayParameters;
@property (nonatomic) BOOL requiresConfigurationForRetry;
@property (nonatomic) BOOL requiresConfigurationForRedirect;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setOverlayValue:(id)a0 forKey:(id)a1;
- (id)overlayValueForKey:(id)a0;
- (id)init;
- (void)setSecureOverlayValue:(id)a0 forKey:(id)a1;
- (id)secureOverlayValueForKey:(id)a0;
- (void)_setOverriddenKeys:(id)a0;
- (void)_updateRequestForRedirect:(id)a0 overrides:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (void)_updateRequestForRetry:(id)a0 retryFields:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)hasOverlayParameters;
- (id)initWithCoder:(id)a0;
- (void)_applySecureOverlayToDictionary:(id)a0;
- (void)_applyOverlayToDictionary:(id)a0;

@end
