@class NSString, NSArray, NEIKEv2AddressList, NSObject;
@protocol OS_dispatch_source;

@interface NEIKEv2Server : NSObject <NSObject>

@property unsigned int redirects;
@property (retain) NSObject<OS_dispatch_source> *redirectTimer;
@property (retain) NSString *serverAddress;
@property (retain) NEIKEv2AddressList *resolvedAddressList;
@property (retain) NSString *redirectedFromAddress;
@property (retain) NSArray *additionalIPv4ServerAddresses;
@property (retain) NSArray *additionalIPv6ServerAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getViableServerAddressForPath:(id)a0;
- (void)setServerResolvedAddress:(id)a0 path:(id)a1;
- (BOOL)startRedirectTimer;
- (BOOL)checkRedirectCount;
- (id)getNextViableServerAddressForPath:(id)a0;
- (void)stopRedirectTimer;

@end
