@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCStreamInputManager : VCObject <VCStreamInputDelegate> {
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_streamInputQueue;
    NSMutableDictionary *_streamInputs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerService:(char *)a0 weakSelf:(id)a1 eventLogLevel:(int)a2 block:(id /* block */)a3;
- (unsigned long long)retainCount;
- (void)registerDidClientDieBlock:(id)a0;
- (id)retain;
- (BOOL)initializeStreamInputWithXPCArguments:(id)a0 result:(id *)a1 error:(id *)a2;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (void)didStartStreamInput:(id)a0;
- (void)deregisterBlocksForService;
- (void)registerService:(char *)a0 weakSelf:(id)a1 block:(id /* block */)a2;
- (BOOL)pushSampleBufferWithXPCArguments:(id)a0 result:(id *)a1 error:(id *)a2;
- (id)init;
- (void)didStopStreamInput:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newStreamInputID;
- (void)registerBlocksForService;
- (void)dealloc;
- (BOOL)terminateStreamInputWithXPCArguments:(id)a0 result:(id *)a1 error:(id *)a2;
- (oneway void)release;

@end
