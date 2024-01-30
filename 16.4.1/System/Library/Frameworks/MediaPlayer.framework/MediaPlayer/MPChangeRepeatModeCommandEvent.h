@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) long long repeatType;
@property (readonly, nonatomic) BOOL preservesRepeatMode;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
