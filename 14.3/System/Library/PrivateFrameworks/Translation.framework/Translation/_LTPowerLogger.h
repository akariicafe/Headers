@class NSOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _LTPowerLogger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property (retain) NSOrderedSet *requestTypeSet;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldLogRequest:(long long)a0;
- (id)_maskForRequestType:(id)a0;
- (void)logTranslateRequestEvent:(id)a0 requestType:(id)a1 routeType:(long long)a2;

@end
