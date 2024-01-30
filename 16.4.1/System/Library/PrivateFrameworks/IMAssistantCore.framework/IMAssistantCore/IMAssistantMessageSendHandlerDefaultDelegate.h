@class NSString;

@interface IMAssistantMessageSendHandlerDefaultDelegate : NSObject <IMAssistantMessageSendHandlerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessage:(id)a0 toChat:(id)a1;

@end
