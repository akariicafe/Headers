@class ASDDSPConfiguration;

@interface ASDStreamDSPConfiguration : NSObject

@property (readonly, nonatomic) ASDDSPConfiguration *hardwareDSP;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
