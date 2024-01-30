@class MRNowPlayingState;

@interface MRSetStateMessage : MRProtocolMessage {
    MRNowPlayingState *_state;
}

@property (readonly, nonatomic) MRNowPlayingState *state;

- (void).cxx_destruct;
- (unsigned long long)priority;
- (unsigned long long)type;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (id)initWithNowPlayingState:(id)a0;

@end
