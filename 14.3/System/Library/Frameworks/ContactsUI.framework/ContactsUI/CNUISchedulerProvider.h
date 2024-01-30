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

- (id)initWithSchedulerProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)newSynchronousSerialSchedulerWithName:(id)a0;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)a0;
- (void)resumeBackgroundScheduler;
- (id)newReaderWriterSchedulerWithName:(id)a0;
- (void)suspendBackgroundScheduler;
- (id)newSerialSchedulerWithName:(id)a0;

@end
