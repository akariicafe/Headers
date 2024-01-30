@class WFTaskIdentifier, WFServiceConnection, NSProgress;

@interface WFTask : NSObject

@property (class, readonly, nonatomic) WFServiceConnection *sharedServiceConnection;

@property (readonly, nonatomic) WFTaskIdentifier *identifier;
@property (readonly, nonatomic) BOOL requiresResponse;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)handleResponse:(id)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseRequired:(BOOL)a0;
- (void)cleanup;
- (void)executeSynchronously;
- (void)startWithService:(id)a0;
- (void)handleCancellation;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (void)start;

@end
