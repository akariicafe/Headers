@class NSString, FBServiceClientAuthenticator;

@interface SBSoftwareUpdateService : NSObject <SBSystemServiceServerSoftwareUpdateDelegate> {
    FBServiceClientAuthenticator *_serviceClientSoftwareUpdatePasscodePolicyEntitlementAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
