@interface IKJSPlaylistEndAction : IKJSObject <IKJSPlaylistEndAction>

@property (readonly) long long STOP;
@property (readonly) long long PAUSE;
@property (readonly) long long WAIT_FOR_MORE_ITEMS;

- (id)init;

@end
