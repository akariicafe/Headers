@class IKAppPlaylistBridge;

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist>

@property (readonly, nonatomic) IKAppPlaylistBridge *bridge;
@property (readonly, nonatomic) unsigned long long length;
@property (nonatomic) long long endAction;
@property (nonatomic) long long repeatMode;

- (id)pop;
- (id)item:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)push:(id)a0;
- (void)dealloc;
- (id)splice:(unsigned long long)a0 :(unsigned long long)a1 :(id)a2;

@end
