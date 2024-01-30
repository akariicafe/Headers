@class NSString;
@protocol CRKIPAddressProviding;

@interface CRKDefaultsBasedInterfaceSwitchingIPAddressProvider : NSObject <CRKIPAddressProviding> {
    id<CRKIPAddressProviding> mBaseProvider;
}

@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
