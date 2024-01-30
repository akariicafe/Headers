@class NSXPCListener, NSString;
@protocol STStatusDomainServerHandle;

@interface STStatusDomainXPCClientListener : NSObject <NSXPCListenerDelegate>

@property (readonly, weak, nonatomic) id<STStatusDomainServerHandle> serverHandle;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
