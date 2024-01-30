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

- (void)removeFileHandleMatchingPredicate:(id /* block */)a0;
- (void)commit;
- (void)iterateFileHandlesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setFileHandle:(id)a0 matchingPredicate:(id /* block */)a1;
- (id)init;
- (id)copyAuxiliaryDataForKey:(id)a0;
- (void)setAuxiliaryData:(id)a0 forKey:(id)a1;
- (id)createEvent;
- (void)resetFileHandlesFromEvent:(id)a0;
- (void)startOwnerModeWithEventName:(id)a0 handlesReceivedCallback:(id /* block */)a1;

@end
