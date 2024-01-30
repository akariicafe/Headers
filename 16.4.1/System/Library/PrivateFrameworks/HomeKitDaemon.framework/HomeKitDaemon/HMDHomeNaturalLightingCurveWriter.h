@class HMDHome, NSString;
@protocol HMDLightProfileDataSource;

@interface HMDHomeNaturalLightingCurveWriter : HMFObject <HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly) id<HMDLightProfileDataSource> dataSource;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
