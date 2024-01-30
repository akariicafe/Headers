@class NSArray, NSMutableArray;

@interface MRCompositeMessage : MRProtocolMessage {
    NSMutableArray *_messages;
}

@property (readonly, nonatomic) NSArray *messages;

- (void)addMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
