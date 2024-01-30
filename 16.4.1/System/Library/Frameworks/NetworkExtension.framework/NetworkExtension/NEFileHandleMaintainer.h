@class NSString, NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface NEFileHandleMaintainer : NSObject {
    BOOL _changed;
    BOOL _isOwnerMode;
    NSMutableArray *_fileHandles;
    id /* block */ _receivedHandlesCallback;
    NSObject<OS_xpc_object> *_auxiliaryDataDictionary;
}

@property (retain) NSString *eventName;

+ (id)sharedMaintainer;

- (id)createEvent;
- (void)commit;
- (void)iterateFileHandlesWithBlock:(id /* block */)a0;
- (void)setAuxiliaryData:(id)a0 forKey:(id)a1;
- (void)setFileHandle:(id)a0 matchingPredicate:(id /* block */)a1;
- (id)copyAuxiliaryDataForKey:(id)a0;
- (void)startOwnerModeWithEventName:(id)a0 handlesReceivedCallback:(id /* block */)a1;
- (id)init;
- (void)removeFileHandleMatchingPredicate:(id /* block */)a0;
- (void)resetFileHandlesFromEvent:(id)a0;
- (void).cxx_destruct;

@end
