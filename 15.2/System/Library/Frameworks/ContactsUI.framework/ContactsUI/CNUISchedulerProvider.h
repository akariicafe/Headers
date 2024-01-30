@class NSString, CNSuspendableSchedulerDecorator;
@protocol CNSchedulerProvider, CNScheduler;

@interface CNUISchedulerProvider : NSObject <CNSchedulerProvider>

@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *suspendableBackgroundScheduler;
@property (readonly, nonatomic) id<CNScheduler> afterCACommitScheduler;
@property (readonly, nonatomic) id<CNScheduler> backgroundScheduler;
@property (readonly, nonatomic) id<CNScheduler> mainThreadScheduler;
@property (readonly, nonatomic) id<CNScheduler> inlineScheduler;
@property (readonly, nonatomic) id<CNScheduler> immediateScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeBackgroundScheduler;

- (void)suspendBackgroundScheduler;
- (id)newSynchronousSerialSchedulerWithName:(id)a0;
- (id)newSerialSchedulerWithName:(id)a0;
- (void)resumeBackgroundScheduler;
- (void).cxx_destruct;
- (id)initWithSchedulerProvider:(id)a0;
- (id)init;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)a0;
- (id)newReaderWriterSchedulerWithName:(id)a0;

@end
