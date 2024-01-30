@interface HSPlaybackControlRequest : HSRequest

@property (readonly, nonatomic) long long controlCommand;
@property (readonly, nonatomic) unsigned int interfaceID;

- (id)initWithInterfaceID:(unsigned int)a0 controlCommand:(long long)a1;

@end
