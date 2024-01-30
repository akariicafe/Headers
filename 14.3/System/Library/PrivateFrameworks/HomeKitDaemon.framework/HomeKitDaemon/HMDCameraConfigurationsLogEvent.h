@class NSUUID, NSString, NSArray;

@interface HMDCameraConfigurationsLogEvent : HMDLogEvent <HMDAWDLogEvent>

@property (class, readonly) NSUUID *uuid;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *homeSettingsConfigurations;

@end
