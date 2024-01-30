@class NSString;

@interface AVCNetworkAddress : NSObject

@property (copy, nonatomic) NSString *ip;
@property (nonatomic) unsigned short port;
@property (nonatomic) BOOL isIPv6;
@property (copy, nonatomic) NSString *interfaceName;

- (void)dealloc;
- (id)init;

@end
