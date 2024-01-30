@class NSString;

@interface HMDMobileGestaltClient : HMFObject <HMDMobileGestaltClient>

@property (readonly) BOOL supportsSiriHub;
@property (readonly) BOOL homeSafetySecurityEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithHomeSafetySecurityEnabled:(BOOL)a0;

@end
