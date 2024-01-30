@class NSString, NSSet;

@interface ASDAudioDeviceDSPDatabase : NSObject

@property (readonly, nonatomic) NSString *deviceUID;
@property (readonly, nonatomic) NSSet *dspConfigurations;
@property (readonly, nonatomic) NSSet *referencedUnderlyingDeviceProperties;
@property (readonly, nonatomic) NSSet *referencedDSPDeviceProperties;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1 deviceUID:(id)a2;
- (id)dspConfigurationForDevice:(id)a0;

@end
