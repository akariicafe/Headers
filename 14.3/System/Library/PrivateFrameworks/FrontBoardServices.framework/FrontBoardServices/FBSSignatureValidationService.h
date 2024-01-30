@class NSString;
@protocol _FBSMISInterfaceWrapper;

@interface FBSSignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {
    id<_FBSMISInterfaceWrapper> _misInterfaceWrapper;
}

@property (nonatomic) BOOL authoritative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithMISInterfaceWrapper:(id)a0;
- (void)_logTrustState:(unsigned long long)a0 forApp:(id)a1 reason:(id)a2;
- (unsigned long long)trustStateForApplication:(id)a0;
- (unsigned int)signatureVersionForApp:(id)a0;
- (unsigned long long)_validateApp:(id)a0;

@end
