@class WFTaskIdentifier, WFServiceConnection, NSProgress;

@interface WFTask : NSObject

@property (class, readonly, nonatomic) WFServiceConnection *sharedServiceConnection;

@property (readonly, nonatomic) WFTaskIdentifier *identifier;
@property (readonly, nonatomic) BOOL requiresResponse;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)cleanup;
- (void)handleResponse:(id)a0;
- (void)cancel;
- (void)handleCancellation;
- (void)startWithService:(id)a0;
- (id)init;
- (void)start;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)executeSynchronously;
- (id)initWithResponseRequired:(BOOL)a0;

@end
