@class NSArray;

@interface GCGenericDeviceRumbleModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (nonatomic) float dispatchFrequency;
@property (copy, nonatomic) NSArray *actuators;
@property (copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) NSArray *outputs;

- (id)build;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)initializeWithModel:(id)a0;

@end
