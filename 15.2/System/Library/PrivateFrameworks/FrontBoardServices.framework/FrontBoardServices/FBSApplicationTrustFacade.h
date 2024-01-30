@class NSString, FBSSignatureValidationService;
@protocol FBSApplicationTrustDataProvider;

@interface FBSApplicationTrustFacade : NSObject <FBSApplicationTrustDataProvider> {
    id<FBSApplicationTrustDataProvider> _legacyProvider;
    id<FBSApplicationTrustDataProvider> _modernProvider;
    FBSSignatureValidationService *_authoritativeProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)trustStateForApplication:(id)a0;
- (void).cxx_destruct;

@end
