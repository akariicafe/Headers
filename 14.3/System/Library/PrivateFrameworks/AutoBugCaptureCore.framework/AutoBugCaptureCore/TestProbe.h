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

+ (id)testProbeStatusString:(unsigned int)a0;
+ (void)autoBugCapturePath:(id *)a0 autoBugCaptureUID:(id *)a1 autoBugCaptureGID:(id *)a2;
+ (void *)loadCoreUtils;

- (void)stopTest;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)removeProbeOutputFiles;
- (void)cancelTest:(id /* block */)a0;
- (BOOL)startPeriodicTimerAt:(unsigned long long)a0 repeatInterval:(unsigned long long)a1;
- (void)stopPeriodicTimer;
- (void)periodicTimerFired:(id)a0;
- (BOOL)startPeriodicTimer;

@end
