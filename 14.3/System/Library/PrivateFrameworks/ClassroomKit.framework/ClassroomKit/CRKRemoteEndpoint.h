@class NSString;

@interface CRKRemoteEndpoint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIPAddress:(id)a0 port:(unsigned short)a1;
- (BOOL)isOnSameHostAsRemoteEndpoint:(id)a0;
- (BOOL)isOnSameHostButDifferentPortAsRemoteEndpoint:(id)a0;
- (BOOL)isEqualToRemoteEndpoint:(id)a0;

@end
