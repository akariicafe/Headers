@class IKAppPlaylistBridge;

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist>

@property (readonly, nonatomic) IKAppPlaylistBridge *bridge;
@property (readonly, nonatomic) unsigned long long length;
@property (nonatomic) long long endAction;
@property (nonatomic) long long repeatMode;

- (id)pop;
- (void)dealloc;
- (void)push:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)item:(long long)a0;
- (id)splice:(long long)a0 :(long long)a1 :(id)a2;

@end
