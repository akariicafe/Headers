@class EMRemoteConnection;

@interface EMFetchController : NSObject

@property (retain) EMRemoteConnection *connection;

+ (id)remoteInterface;

- (id)initWithRemoteConnection:(id)a0;
- (void).cxx_destruct;
- (void)performFetchOfType:(int)a0 accounts:(id)a1;
- (id)diagnosticInformation;
- (void)setCurrentSuppressionContexts:(id)a0 suppressedContexts:(id)a1;
- (void)performFetchOfType:(int)a0 mailboxes:(id)a1;
- (void)performFetchOfType:(int)a0;

@end
