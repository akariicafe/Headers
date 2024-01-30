@class NSString, NSSet;

@interface CRKSCBackedIPAddressProvider : NSObject <CRKIPAddressProviding> {
    NSSet *mInterfaceTypes;
}

@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ethernetIPAddressProvider;
+ (id)WiFiIPAddressProvider;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInterfaceType:(id)a0;
- (id)initWithInterfaceTypes:(id)a0;
- (BOOL)isAllowedInterfaceType:(id)a0;

@end
