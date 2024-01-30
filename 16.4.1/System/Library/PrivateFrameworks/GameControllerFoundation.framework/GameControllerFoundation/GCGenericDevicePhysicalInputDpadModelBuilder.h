@interface GCGenericDevicePhysicalInputDpadModelBuilder : GCGenericDevicePhysicalInputElementModelBuilder

@property (nonatomic) long long sourceUpExtendedEventFieldIndex;
@property (nonatomic) long long sourceDownExtendedEventFieldIndex;
@property (nonatomic) long long sourceLeftExtendedEventFieldIndex;
@property (nonatomic) long long sourceRightExtendedEventFieldIndex;

+ (Class)modelClass;

- (id)build;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
