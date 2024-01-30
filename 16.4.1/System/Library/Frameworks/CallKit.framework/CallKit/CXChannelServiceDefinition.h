@class NSString, CXServiceDomain, Protocol;

@interface CXChannelServiceDefinition : NSObject <CXServiceDefinition>

@property (readonly, copy) Protocol *clientXPCInterface;
@property (readonly, copy) Protocol *serverXPCInterface;
@property (readonly, copy) NSString *name;
@property (readonly) CXServiceDomain *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
