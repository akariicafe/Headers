@interface HMDLegacyV4Model : HMDLegacyModel

+ (id)hmbProperties;
+ (Class)hmbModelClassForHMDModelClass:(Class)a0;
+ (id)createWithLegacyRecord:(id)a0 modelContainer:(id)a1 error:(id *)a2;

- (id)hmbType;
- (id)encodeWithExistingRecord:(id)a0 cloudZone:(id)a1 modelContainer:(id)a2 error:(id *)a3;
- (id)convertToHMDModelObject;

@end
