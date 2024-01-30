@class NSString;

@interface CRKSingleInterfaceIPAddressProvider : NSObject <CRKIPAddressProviding> {
    NSString *mInterfaceName;
}

@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInterfaceName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
