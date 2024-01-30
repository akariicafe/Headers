@class NSString;

@interface _UIViewServiceViewControllerOperator_XPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)connectionInvocation;
- (id)connectionProtocol;
- (id)hostObjectInterface;
- (SEL)connectionSelector;
- (id)exportedInterface;

@end
