@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface NTKFaceSupportUnlockAttemptEventRecorder : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *lookup;

+ (id)sharedRecorder;
+ (id)eventRecorder;

- (void).cxx_destruct;
- (id)_init;
- (void)beginRecordingForIdentifier:(id)a0 method:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)endRecordingForIdentifier:(id)a0 status:(unsigned long long)a1 errorCode:(long long)a2 completion:(id /* block */)a3;
- (void)_queue_beginRecordingForIdentifier:(id)a0 method:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_queue_endRecordingForIdentifier:(id)a0 status:(unsigned long long)a1 errorCode:(long long)a2 completion:(id /* block */)a3;
- (id)_validateIdentifier:(id)a0;

@end
