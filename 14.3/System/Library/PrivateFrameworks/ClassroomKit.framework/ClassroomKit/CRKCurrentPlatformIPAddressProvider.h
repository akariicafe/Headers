@class NSString;
@protocol CRKIPAddressProviding;

@interface CRKCurrentPlatformIPAddressProvider : NSObject <CRKIPAddressProviding>

@property (readonly, nonatomic) id<CRKIPAddressProviding> baseProvider;
@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingIPAddress;

- (id)init;
- (void).cxx_destruct;
- (id)makeProviderForCurrentPlatform;

@end
