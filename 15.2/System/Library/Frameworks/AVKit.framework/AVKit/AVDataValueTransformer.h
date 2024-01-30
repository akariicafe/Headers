@class NSString;

@interface AVDataValueTransformer : NSObject <AVAirTransportTransformationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageTransformerWithClass:(Class)a0;

- (id)dataForMessage:(id)a0;
- (id)reverseTransformerForMessageData:(id)a0;

@end
