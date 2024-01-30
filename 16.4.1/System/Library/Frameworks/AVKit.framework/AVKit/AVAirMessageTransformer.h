@class NSData;

@interface AVAirMessageTransformer : AVDataValueTransformer {
    NSData *_previousUnusedData;
}

@property (readonly, nonatomic) Class messageClass;

- (void)resetState;
- (void).cxx_destruct;
- (id)dataForMessage:(id)a0;
- (id)initWithMessageClass:(Class)a0;
- (id)reverseTransformerForMessageData:(id)a0;

@end
