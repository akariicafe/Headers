@class NSArray, NSString, MRNowPlayingState;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage {
    MRNowPlayingState *_state;
}

@property (readonly, nonatomic) NSArray *supportedCommands;
@property (readonly, nonatomic) NSString *bundleID;

- (unsigned long long)type;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithDefaultSupportedCommands:(id)a0 forPlayerPath:(id)a1;

@end
