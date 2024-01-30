@class NSDictionary, NSURL, NSString;
@protocol RPBroadcastControllerDelegate;

@interface RPBroadcastController : NSObject

@property (retain, nonatomic) NSDictionary *serviceInfo;
@property (retain, nonatomic) NSURL *broadcastURL;
@property (retain, nonatomic) NSString *broadcastExtensionBundleIdentifier;
@property (readonly, nonatomic, getter=isBroadcasting) BOOL broadcasting;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (weak, nonatomic) id<RPBroadcastControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *broadcastExtensionBundleID;

- (void)startSystemBroadcastWithHandler:(id /* block */)a0;
- (void)startBroadcastWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pauseBroadcast;
- (id)initWithCurrentSession;
- (id)initWithExtensionBundleID:(id)a0 broadcastURL:(id)a1;
- (void)finishBroadcastWithHandler:(id /* block */)a0;
- (void)resumeBroadcast;
- (void)finishSystemBroadcastWithHandler:(id /* block */)a0;

@end
