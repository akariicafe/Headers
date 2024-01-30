@class NSString, EDAssetDownloadScheduler, NSObject;
@protocol OS_xpc_object;

@interface _EDAssetDownloadSchedulerContinuation : NSObject <EDAssetDownloadSchedulerContinuation>

@property (weak, nonatomic) EDAssetDownloadScheduler *scheduler;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
