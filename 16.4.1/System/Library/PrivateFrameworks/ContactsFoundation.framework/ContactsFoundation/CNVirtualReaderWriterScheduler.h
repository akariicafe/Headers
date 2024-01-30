@class NSString, CNSuspendableSchedulerDecorator;

@interface CNVirtualReaderWriterScheduler : NSObject <CNReaderWriterScheduler>

@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)performReaderBlock:(id /* block */)a0;
- (void)performSynchronousWriterBlock:(id /* block */)a0;
- (id)initWithScheduler:(id)a0;
- (id)performWriterBlock:(id /* block */)a0;
- (void)suspend;
- (id)init;
- (void)performSynchronousReaderBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resume;

@end
