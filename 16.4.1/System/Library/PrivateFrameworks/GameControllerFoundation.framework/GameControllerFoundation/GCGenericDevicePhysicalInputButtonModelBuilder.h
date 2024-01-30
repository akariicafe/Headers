@interface GCGenericDevicePhysicalInputButtonModelBuilder : GCGenericDevicePhysicalInputElementModelBuilder

@property (nonatomic) long long sourceExtendedEventFieldIndex;

+ (Class)modelClass;

- (id)build;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
