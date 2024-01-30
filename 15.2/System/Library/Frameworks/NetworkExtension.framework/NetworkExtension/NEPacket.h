@class NSData, NEFilterPacketInterpose, NEFlowMetaData;

@interface NEPacket : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property void *context;
@property (retain) NEFilterPacketInterpose *interpose;
@property (readonly, copy) NSData *data;
@property (readonly) unsigned char protocolFamily;
@property (readonly) long long direction;
@property (readonly) NEFlowMetaData *metadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 protocolFamily:(unsigned char)a1 metadata:(id)a2;
- (id)initWithData:(id)a0 direction:(long long)a1 context:(void *)a2 interpose:(id)a3;
- (id)initWithData:(id)a0 protocolFamily:(unsigned char)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
