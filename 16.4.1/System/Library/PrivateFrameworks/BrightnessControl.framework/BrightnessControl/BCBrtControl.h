@class NSUUID, NSMutableDictionary, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface BCBrtControl : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_id;
    double _midNits;
    const struct __CFUUID { } *_cfContainerID;
    unsigned int _displayService;
}

@property (readonly) NSObject<OS_os_log> *logHandle;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) const struct __CFUUID { } *cfContainerID;
@property (readonly) NSUUID *containerID;
@property (readonly) double maxNits;
@property (readonly) double minNits;
@property (readonly, copy) id ID;
@property (readonly) NSMutableDictionary *capabilities;
@property BOOL multipleControlEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isValid;
@property (copy) id /* block */ displayInvalidHandler;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;

+ (id)copyAllAvailableControls;
+ (id)copyAvailableControls;
+ (id)newMonitorForAllControlsWithHandler:(id /* block */)a0 error:(id *)a1;
+ (id)newMonitorWithHandler:(id /* block */)a0 error:(id *)a1;

- (id)copyProperty:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)setDisplayService:(unsigned int)a0;
- (void)setNitsAsync:(double)a0 completionHandler:(id /* block */)a1;
- (BOOL)_checkIsValid:(id *)a0;
- (void)_runOnCallbackQueue:(id /* block */)a0;
- (id)copyModuleIdentifier;
- (double)getNitsWithError:(id *)a0;
- (BOOL)setNits:(double)a0 error:(id *)a1;
- (BOOL)setProperty:(id)a0 value:(id)a1 error:(id *)a2;
- (void)setPropertyAync:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;

@end
