@class AUMessageChannel_XPC;

@interface ExportedMessageChannel : NSObject <AUAudioUnitMessageChannelProtocol> {
    AUMessageChannel_XPC *_messageChannel;
}

- (void).cxx_destruct;
- (id)initWithMessageChannel:(id)a0;
- (void)onCallRemoteAU:(id)a0 reply:(id /* block */)a1;

@end
