@class NSString;

@interface CALNNullCoreLocationProvider : NSObject <CALNCoreLocationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0;
- (int)authorizationStatusForBundle:(id)a0;
- (void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(id)a0;
- (BOOL)preciseLocationAuthorizedForBundle:(id)a0;
- (int)authorizationStatusForBundleIdentifier:(id)a0;

@end
