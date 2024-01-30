@interface MPSeekCommandEvent : MPRemoteCommandEvent {
    unsigned int _commandType;
}

@property (readonly, nonatomic) unsigned long long type;

- (unsigned int)mediaRemoteCommandType;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
