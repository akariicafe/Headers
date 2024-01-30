@interface MLInternalSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL restrictNeuralNetworksToUseCPUOnly;
@property BOOL restrictNeuralNetworksFromUsingANE;
@property (readonly, nonatomic) BOOL isNeuralNetworkGPUPathForbidden;

+ (id)globalSettings;
+ (BOOL)deviceHasANE;
+ (id)globalSettingsFromSettings:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
