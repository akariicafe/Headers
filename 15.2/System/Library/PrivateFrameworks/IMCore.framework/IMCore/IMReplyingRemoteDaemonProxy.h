@class IMDaemonController;

@interface IMReplyingRemoteDaemonProxy : NSProxy

@property (readonly, weak, nonatomic) IMDaemonController *daemonController;
@property (nonatomic) BOOL synchronousReplies;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithDaemonController:(id)a0 synchronousReplies:(BOOL)a1;

@end
