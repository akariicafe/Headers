@class IKAppContext, IKJSPlaylist;
@protocol IKAppPlaylist;

@interface IKAppPlaylistBridge : NSObject

@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly, weak, nonatomic) IKJSPlaylist *jsPlaylist;
@property (readonly) unsigned long long length;
@property (nonatomic) long long endAction;
@property (nonatomic) long long repeatMode;
@property (readonly, weak, nonatomic) id<IKAppPlaylist> appPlaylist;

- (id)item:(long long)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)_evaluateDelegateBlockSync:(id /* block */)a0;
- (id)initWithAppContext:(id)a0 jsPlaylist:(id)a1;
- (id)replaceItemsAt:(long long)a0 count:(unsigned long long)a1 with:(id)a2;

@end
