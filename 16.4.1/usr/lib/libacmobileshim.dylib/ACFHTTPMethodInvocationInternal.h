@class NSRecursiveLock, NSMutableDictionary, NSMutableData, NSURLConnection;

@interface ACFHTTPMethodInvocationInternal : NSObject

@property (retain) NSRecursiveLock *invocationGuard;
@property (retain) NSRecursiveLock *schedulingGuard;
@property (retain) NSMutableDictionary *runLoops;
@property (retain) NSURLConnection *connection;
@property BOOL isFinished;
@property (retain) NSMutableData *receivedDataAccumulator;

- (void)dealloc;
- (id)init;

@end
