@class ACCTransportIOAccessoryManager;

@interface DeferredAuthCPServiceWrapper : NSObject

@property (nonatomic) unsigned int service;
@property (retain, nonatomic) ACCTransportIOAccessoryManager *mgr;

- (void).cxx_destruct;
- (id)initWithIOService:(unsigned int)a0 withMgr:(id)a1;

@end
