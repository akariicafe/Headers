@class NSString, NSSet, NSArray;

@interface ASDAudioDeviceDSPConfiguration : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSSet *underlyingDeviceProperties;
@property (readonly, nonatomic) NSSet *dspDeviceProperties;
@property (readonly, nonatomic) NSArray *inputDSP;
@property (readonly, nonatomic) NSArray *outputDSP;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1 name:(id)a2;

@end
