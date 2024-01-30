@class NSData, CATAddress;

@interface CATEndPoint : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) CATAddress *address;
@property (readonly, nonatomic) unsigned int port;

- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithAddress:(id)a0 port:(unsigned int)a1;
- (unsigned long long)hash;
- (BOOL)isEqualToEndPoint:(id)a0;

@end
