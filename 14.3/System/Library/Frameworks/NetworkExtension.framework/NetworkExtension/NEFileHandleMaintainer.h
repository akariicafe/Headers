@class NSString, NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface NEFileHandleMaintainer : NSObject

@property (retain) NSMutableArray *fileHandles;
@property BOOL changed;
@property (copy) id /* block */ receivedHandlesCallback;
@property BOOL isOwnerMode;
@property (retain) NSObject<OS_xpc_object> *auxiliaryDataDictionary;
@property (retain) NSString *eventName;

+ (id)sharedMaintainer;

- (void)commit;
- (id)init;
- (void)resetFileHandlesFromEvent:(id)a0;
- (void).cxx_destruct;
- (void)startOwnerModeWithEventName:(id)a0 handlesReceivedCallback:(id /* block */)a1;
- (void)setAuxiliaryData:(id)a0 forKey:(id)a1;
- (void)removeFileHandleMatchingPredicate:(id /* block */)a0;
- (id)createEvent;
- (void)iterateFileHandlesWithBlock:(id /* block */)a0;
- (void)setFileHandle:(id)a0 matchingPredicate:(id /* block */)a1;
- (id)copyAuxiliaryDataForKey:(id)a0;

@end
