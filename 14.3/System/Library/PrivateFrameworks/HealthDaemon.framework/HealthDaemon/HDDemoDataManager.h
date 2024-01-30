@class HDDemoDataGenerator, NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDDemoDataManager : NSObject <HDHealthDaemonReadyObserver> {
    NSObject<OS_dispatch_queue> *_demoDataQueue;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDDemoDataGenerator *generator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
