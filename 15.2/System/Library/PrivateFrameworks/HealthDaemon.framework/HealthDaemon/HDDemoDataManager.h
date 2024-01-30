@class HDDemoDataGenerator, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDDemoDataManager : NSObject <HDProfileReadyObserver> {
    NSObject<OS_dispatch_queue> *_demoDataQueue;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDDemoDataGenerator *generator;

- (id)initWithProfile:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (void).cxx_destruct;

@end
