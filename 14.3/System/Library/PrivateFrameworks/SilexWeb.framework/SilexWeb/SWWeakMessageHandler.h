@class NSString;
@protocol SWMessageHandler;

@interface SWWeakMessageHandler : NSObject <SWMessageHandler>

@property (readonly, weak, nonatomic) id<SWMessageHandler> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerWithMessageHandler:(id)a0;

- (void).cxx_destruct;
- (void)didReceiveMessage:(id)a0 securityOrigin:(id)a1;

@end
