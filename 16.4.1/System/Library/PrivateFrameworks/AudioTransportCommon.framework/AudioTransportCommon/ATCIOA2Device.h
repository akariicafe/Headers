@class IOKConnection, NSArray, NSString, IOKNotificationPort, NSObject, IOKService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATCIOA2Device : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    IOKService *_service;
    IOKConnection *_connection;
    IOKNotificationPort *_notificationPort;
    NSObject<OS_dispatch_source> *_notificationSource;
    struct IOAudio2EngineStatus { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *_engineStatus;
}

@property (copy, nonatomic) NSArray *inputStreams;
@property (copy, nonatomic) NSArray *outputStreams;
@property (copy, nonatomic) NSArray *availableSampleRates;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) unsigned int clockDomain;
@property (readonly, nonatomic) unsigned int inputSafetyOffset;
@property (readonly, nonatomic) unsigned int inputLatency;
@property (readonly, nonatomic) unsigned int outputSafetyOffset;
@property (readonly, nonatomic) unsigned int outputLatency;
@property (readonly, nonatomic) unsigned int ioBufferSize;

+ (id)iokitMatchingDictionary;

- (id)initWithService:(id)a0;
- (void)handleNotification:(struct IOAudio2Notification { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_buildInputStreams;
- (id)_buildOutputStreams;
- (BOOL)changeToSampleRate:(double)a0 error:(id *)a1;
- (BOOL)performConfiigChangeForNotification:(struct IOAudio2Notification { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; } *)a0 error:(id *)a1;
- (BOOL)startIOError:(id *)a0;
- (BOOL)stopIOError:(id *)a0;

@end
