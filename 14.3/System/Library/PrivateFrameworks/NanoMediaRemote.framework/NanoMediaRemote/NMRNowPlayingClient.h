@class NSString;

@interface NMRNowPlayingClient : NSObject

@property (readonly, nonatomic) void *mediaRemoteNowPlayingClient;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithMRNowPlayingClient:(void *)a0;

@end
