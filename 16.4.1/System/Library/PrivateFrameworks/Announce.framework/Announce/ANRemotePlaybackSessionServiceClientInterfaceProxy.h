@class NSString;
@protocol ANRemotePlaybackSessionServiceClientInterface;

@interface ANRemotePlaybackSessionServiceClientInterfaceProxy : NSObject <ANRemotePlaybackSessionServiceClientInterface>

@property (weak, nonatomic) id<ANRemotePlaybackSessionServiceClientInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didReceiveAnnouncement:(id)a0 forGroupID:(id)a1;
- (void)didUpdateAnnouncements:(id)a0 forGroupID:(id)a1;

@end
