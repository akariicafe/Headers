@class NSString, NSData, NSFileHandle, NSNumber;

@interface NEVirtualInterfaceParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSFileHandle *controlSocket;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) void *userEthernetController;
@property (readonly) long long type;
@property (readonly) unsigned long long maxPendingPackets;
@property (readonly) NSData *ethernetAddress;
@property (readonly) NSNumber *mtu;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (struct NEVirtualInterface_s { } *)createVirtualInterfaceWithQueue:(id)a0 clientInfo:(void *)a1;
- (id)initWithType:(long long)a0 maxPendingPackets:(unsigned long long)a1 ethernetAddress:(id)a2 mtu:(id)a3;
- (id)initWithVirtualInterface:(struct NEVirtualInterface_s { } *)a0;

@end
