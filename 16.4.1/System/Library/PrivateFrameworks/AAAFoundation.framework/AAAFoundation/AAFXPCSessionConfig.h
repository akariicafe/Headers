@class NSString, NSXPCInterface, Protocol;

@interface AAFXPCSessionConfig : NSObject

@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) Protocol *remoteProtocol;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (retain, nonatomic) Protocol *exportedProtocol;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 remoteProtocol:(id)a1 exportedProtocol:(id)a2 options:(unsigned long long)a3;
- (id)initWithServiceName:(id)a0 remoteProtocol:(id)a1 options:(unsigned long long)a2;

@end
