@class MRNowPlayingState;

@interface MRSetStateMessage : MRProtocolMessage {
    MRNowPlayingState *_state;
}

@property (readonly, nonatomic) MRNowPlayingState *state;

- (id)initWithNowPlayingState:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
