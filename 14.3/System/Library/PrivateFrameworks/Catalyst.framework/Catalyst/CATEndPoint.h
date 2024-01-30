@class NSData, CATAddress;

@interface CATEndPoint : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) CATAddress *address;
@property (readonly, nonatomic) unsigned int port;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (id)initWithAddress:(id)a0 port:(unsigned int)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToEndPoint:(id)a0;

@end
