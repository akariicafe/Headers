@class NSString;

@interface SPXcodeSupport : NSObject <SPLocalApplicationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveData:(id)a0;
- (void)applicationIdentifierWithReply:(id /* block */)a0;

@end
