@class NSString;

@interface _UIViewControllerControlMessageDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)connectionProtocol;
- (id)connectionInvocation;
- (id)hostObjectInterface;
- (id)exportedInterface;
- (SEL)connectionSelector;

@end
