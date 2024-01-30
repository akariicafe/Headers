@class NSString, NSObject;
@protocol OS_dispatch_source, AXIPCServerClientRegistrationDelegate;

@interface AXIPCServerClientRegistration : NSObject

@property (readonly, nonatomic) unsigned int port;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *invalidationSource;
@property (weak, nonatomic) id<AXIPCServerClientRegistrationDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPort:(unsigned int)a0 identifier:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
