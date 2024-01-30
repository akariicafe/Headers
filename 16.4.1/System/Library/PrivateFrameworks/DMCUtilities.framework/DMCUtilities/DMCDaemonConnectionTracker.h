@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DMCDaemonConnectionTracker : NSObject

@property (copy, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *connectionCache;
@property (retain, nonatomic) NSMutableDictionary *requestCache;
@property (retain, nonatomic) NSMutableDictionary *pidNameCache;
@property (nonatomic) double connectionThreshold;
@property (nonatomic) double requestThreshold;
@property (copy, nonatomic) id /* block */ excessiveConncetionHandler;
@property (copy, nonatomic) id /* block */ excessiveRequestHandler;

- (id)_nameForProcessWithPID:(int)a0 cache:(id)a1;
- (void)trackConnectionFromPID:(int)a0;
- (void)trackRequestFromPID:(int)a0;
- (id)initWithProcessName:(id)a0 connectionThreshold:(unsigned long long)a1 requestThreshold:(unsigned long long)a2;
- (void).cxx_destruct;

@end
