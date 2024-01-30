@class WFTaskIdentifier, WFServiceConnection, NSProgress;

@interface WFTask : NSObject

@property (class, readonly, nonatomic) WFServiceConnection *sharedServiceConnection;

@property (readonly, nonatomic) WFTaskIdentifier *identifier;
@property (readonly, nonatomic) BOOL requiresResponse;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)cleanup;
- (void)handleResponse:(id)a0;
- (void)handleCancellation;
- (void)start;
- (void).cxx_destruct;
- (void)startWithService:(id)a0;
- (id)init;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (void)cancel;
- (id)initWithResponseRequired:(BOOL)a0;
- (void)executeSynchronously;

@end
