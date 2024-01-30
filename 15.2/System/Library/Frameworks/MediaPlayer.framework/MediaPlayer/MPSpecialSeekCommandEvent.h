@interface MPSpecialSeekCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) unsigned long long type;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
