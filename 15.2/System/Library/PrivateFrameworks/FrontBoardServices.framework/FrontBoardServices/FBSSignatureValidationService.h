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

- (id)_initWithMISInterfaceWrapper:(id)a0;
- (unsigned long long)trustStateForApplication:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned int)signatureVersionForApp:(id)a0;
- (unsigned long long)_validateApp:(id)a0;
- (void)_logTrustState:(unsigned long long)a0 forApp:(id)a1 reason:(id)a2;

@end
