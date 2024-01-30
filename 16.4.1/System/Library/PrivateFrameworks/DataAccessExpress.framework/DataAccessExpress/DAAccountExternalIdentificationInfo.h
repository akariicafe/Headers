@class NSString, NSArray;

@interface DAAccountExternalIdentificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) BOOL useSSL;
@property (readonly, copy, nonatomic) NSArray *ownerAddresses;
@property (readonly, copy, nonatomic) NSString *preferredOwnerAddress;

- (void).cxx_destruct;
- (id)initWithHost:(id)a0 port:(long long)a1 useSSL:(BOOL)a2 ownerAddresses:(id)a3 preferredOwnerAddress:(id)a4;

@end
