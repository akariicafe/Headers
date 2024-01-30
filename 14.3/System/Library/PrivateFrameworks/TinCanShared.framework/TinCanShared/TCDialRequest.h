@interface TCDialRequest : TUDialRequest

@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isRemoteUplinkMuted) BOOL remoteUplinkMuted;

- (id)URL;
- (id)initWithURL:(id)a0;

@end
