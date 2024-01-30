@interface HMDCameraFeaturesDataSource : NSObject

@property (readonly, getter=isSignificantEventNotificationsFeatureEnabled) BOOL significantEventNotificationsFeatureEnabled;
@property (readonly, getter=isTVDoorbellNotificationsFeatureEnabled) BOOL tvDoorbellNotificationsFeatureEnabled;

@end
