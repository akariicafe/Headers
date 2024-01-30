@class PKOSVersionRequirementRange;

@interface PKWebServiceVirtualCardFeatureNetwork : NSObject

@property (nonatomic) long long network;
@property (nonatomic) BOOL implicitlySupported;
@property (retain, nonatomic) PKOSVersionRequirementRange *versions;

+ (id)virtualCardFeatureNetworksFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 network:(long long)a1;
- (BOOL)isSupportedOnDevice:(id)a0;

@end
