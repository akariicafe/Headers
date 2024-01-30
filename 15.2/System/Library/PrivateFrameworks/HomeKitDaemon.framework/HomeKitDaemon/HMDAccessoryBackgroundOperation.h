@class NSUUID, NSString;

@interface HMDAccessoryBackgroundOperation : HMDBackgroundOperation <HMFLogging>

@property (readonly, copy, nonatomic) NSUUID *accessoryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)persistent;
+ (id)logCategory;

@end
