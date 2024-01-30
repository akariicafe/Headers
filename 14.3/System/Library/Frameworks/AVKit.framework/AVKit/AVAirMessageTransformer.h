@class NSData;

@interface AVAirMessageTransformer : AVDataValueTransformer {
    NSData *_previousUnusedData;
}

@property (readonly, nonatomic) Class messageClass;

- (void).cxx_destruct;
- (void)resetState;
- (id)initWithMessageClass:(Class)a0;
- (id)dataForMessage:(id)a0;
- (id)reverseTransformerForMessageData:(id)a0;

@end
