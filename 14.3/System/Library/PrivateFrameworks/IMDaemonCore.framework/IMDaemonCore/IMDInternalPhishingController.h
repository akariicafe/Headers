@class IMRemoteURLConnection, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMDInternalPhishingController : NSObject

@property (retain) IMRemoteURLConnection *remoteURLConnection;
@property (retain) NSArray *blacklist;
@property double lastBlacklistSync;
@property (retain) NSObject<OS_dispatch_queue> *blacklistDiskQueue;

+ (id)sharedInstance;
+ (BOOL)_isAppleInternal;
+ (BOOL)allowPhishingCheck;
+ (BOOL)_hasAppleConnect;

- (id)_endpoint;
- (id)init;
- (void)dealloc;
- (id)_apiKey;
- (BOOL)blacklistMessage:(id)a0;
- (void)loadBlacklistFromDiskAsync:(BOOL)a0;
- (void)fetchBlacklistFromNetworkWithCompletion:(id /* block */)a0;
- (void)_persistBlacklist:(BOOL)a0;

@end
