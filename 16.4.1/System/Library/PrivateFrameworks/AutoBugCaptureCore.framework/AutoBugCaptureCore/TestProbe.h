@class NSUUID, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TestProbe : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *diagSessionUUID;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isRunning) BOOL running;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicTimer;
@property (readonly, nonatomic) NSMutableArray *probeOutputFilePaths;

+ (void)autoBugCapturePath:(id *)a0 autoBugCaptureUID:(id *)a1 autoBugCaptureGID:(id *)a2;
+ (void *)loadCoreUtils;
+ (id)testProbeStatusString:(unsigned int)a0;

- (void)stopPeriodicTimer;
- (BOOL)isEqual:(id)a0;
- (BOOL)startPeriodicTimer;
- (void)stopTest;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)cancelTest:(id /* block */)a0;
- (void)periodicTimerFired:(id)a0;
- (void)removeProbeOutputFiles;
- (BOOL)startPeriodicTimerAt:(unsigned long long)a0 repeatInterval:(unsigned long long)a1;

@end
