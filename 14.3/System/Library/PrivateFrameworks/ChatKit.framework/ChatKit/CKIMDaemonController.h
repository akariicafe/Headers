@class NSArray;

@interface CKIMDaemonController : IMDaemonController

@property (retain, nonatomic) NSArray *listeners;

+ (id)sharedInstance;
+ (void)beginSimulatingDaemon;

- (void).cxx_destruct;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0 capabilities:(unsigned int)a1 blockUntilConnected:(BOOL)a2;
- (void)sendBalloonPayload:(id)a0 attachments:(id)a1 withMessageGUID:(id)a2 bundleID:(id)a3;

@end
