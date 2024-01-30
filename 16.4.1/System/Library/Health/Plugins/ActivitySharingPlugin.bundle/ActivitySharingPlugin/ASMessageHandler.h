@interface ASMessageHandler : NSObject

@property (nonatomic) Class protobufClass;
@property (nonatomic) SEL handleReceiveMessageAction;
@property (nonatomic) SEL handleErrorSendingMessageAction;

@end
