@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMIModelLoader : HMFObject <HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *pendingUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;
+ (id)assetDirectoryPath;

@end
