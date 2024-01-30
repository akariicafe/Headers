@interface MPAdvanceShuffleModeCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) BOOL preservesShuffleMode;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
