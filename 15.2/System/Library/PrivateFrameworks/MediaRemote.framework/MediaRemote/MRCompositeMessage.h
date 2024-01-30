@class NSArray, NSMutableArray, MRProtocolMessageOptions;

@interface MRCompositeMessage : MRProtocolMessage {
    NSMutableArray *_messages;
    MRProtocolMessageOptions *_transportOptions;
}

@property (readonly, nonatomic) NSArray *messages;

- (id)description;
- (id)transportOptions;
- (void).cxx_destruct;
- (id)init;
- (void)addMessage:(id)a0;
- (void)setTransportOptions:(id)a0;

@end
