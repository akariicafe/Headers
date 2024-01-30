@class NSString;
@protocol WFRemoteUserInterface;

@interface WFRemoteActionUserInterface : NSObject <WFRemoteUserInterface>

@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, nonatomic) id<WFRemoteUserInterface> remoteUserInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithUserInterfaceType:(id)a0 listenerEndpoint:(id)a1 interface:(id)a2;

@end
