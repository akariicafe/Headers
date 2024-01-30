@class NSArray, NSMutableArray, MRProtocolMessageOptions;

@interface MRCompositeMessage : MRProtocolMessage {
    NSMutableArray *_messages;
    MRProtocolMessageOptions *_transportOptions;
}

@property (readonly, nonatomic) NSArray *messages;

- (void)addMessage:(id)a0;
- (void)setTransportOptions:(id)a0;
- (id)transportOptions;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
