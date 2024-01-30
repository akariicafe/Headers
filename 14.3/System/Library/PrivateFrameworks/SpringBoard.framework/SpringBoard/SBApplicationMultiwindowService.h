@class NSString, FBServiceClientAuthenticator;

@interface SBApplicationMultiwindowService : NSObject <SBApplicationServerMultiwindowDelegate> {
    FBServiceClientAuthenticator *_serviceClientAccessEntitlementAuthenticator;
}

@property (class, readonly, nonatomic) SBApplicationMultiwindowService *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
