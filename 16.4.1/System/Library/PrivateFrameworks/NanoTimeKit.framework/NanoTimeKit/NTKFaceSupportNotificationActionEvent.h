@class NSString, NSDictionary;

@interface NTKFaceSupportNotificationActionEvent : NSObject <NTKFaceSupportAnalyticsRepresentable>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) double delayFromPresentation;
@property (readonly, nonatomic) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (readonly, nonatomic) NSString *ntkfs_analyticsEventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 action:(long long)a1 delayFromPresentation:(double)a2;

@end
