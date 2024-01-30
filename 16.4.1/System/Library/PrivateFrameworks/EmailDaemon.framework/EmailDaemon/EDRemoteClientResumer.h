@class NSString, EDRemoteClient;

@interface EDRemoteClientResumer : NSObject <EDResumable>

@property (weak) EDRemoteClient *remoteClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRemoteClient:(id)a0;
- (void)resumeForUpdates;

@end
