@class NSString, NSDictionary;

@interface NTKFaceSupportNotificationPresentationEvent : NSObject <NTKFaceSupportAnalyticsRepresentable>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long artworkUsed;
@property (readonly, nonatomic) double delayFromServerPush;
@property (readonly, nonatomic) double delayFromBundleUnlock;
@property (readonly, nonatomic) long long schedulingErrorCode;
@property (readonly, nonatomic) long long optOutSources;
@property (readonly, nonatomic) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (readonly, nonatomic) NSString *ntkfs_analyticsEventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 status:(long long)a1 artworkUsed:(long long)a2 delayFromServerPush:(double)a3 delayFromBundleUnlock:(double)a4 schedulingErrorCode:(long long)a5 optOutSources:(long long)a6;

@end
