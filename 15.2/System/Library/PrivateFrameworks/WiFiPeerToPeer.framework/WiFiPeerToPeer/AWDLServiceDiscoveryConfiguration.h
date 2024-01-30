@class NSData;

@interface AWDLServiceDiscoveryConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSData *serviceKey;
@property (readonly, nonatomic) NSData *serviceValue;
@property (readonly, nonatomic) BOOL browse;

- (id)initWithServiceKeyBytes:(const char *)a0 serviceKeyLength:(unsigned short)a1 serviceValueBytes:(const char *)a2 serviceValueLength:(unsigned short)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceKeyBytes:(const char *)a0 serviceKeyLength:(unsigned short)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServiceKey:(id)a0 serviceValue:(id)a1 browse:(BOOL)a2;

@end
