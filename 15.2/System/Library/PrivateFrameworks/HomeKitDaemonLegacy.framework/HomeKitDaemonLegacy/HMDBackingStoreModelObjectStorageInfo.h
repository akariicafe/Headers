@class NSSet, HMFVersion;

@interface HMDBackingStoreModelObjectStorageInfo : HMFObject

@property (retain, nonatomic) HMFVersion *readOnly;
@property (retain, nonatomic) HMFVersion *unavailable;
@property (readonly, nonatomic) Class classObj;
@property (readonly, nonatomic) unsigned long long logging;
@property (readonly, nonatomic) id defaultValue;
@property (readonly, nonatomic) BOOL defaultValueSet;
@property (readonly, nonatomic) NSSet *decodeClasses;

+ (id)deprecatedField;
+ (id)infoWithClass:(Class)a0;
+ (id)infoWithClass:(Class)a0 logging:(unsigned long long)a1;
+ (id)infoWithClass:(Class)a0 logging:(unsigned long long)a1 readOnly:(id)a2;
+ (id)infoWithClass:(Class)a0 logging:(unsigned long long)a1 readOnly:(id)a2 unavailable:(id)a3;
+ (id)infoWithClass:(Class)a0 defaultValue:(id)a1;
+ (id)infoWithClass:(Class)a0 defaultValue:(id)a1 logging:(unsigned long long)a2;
+ (id)infoWithClass:(Class)a0 defaultValue:(id)a1 logging:(unsigned long long)a2 readOnly:(id)a3;
+ (id)infoWithClass:(Class)a0 defaultValue:(id)a1 logging:(unsigned long long)a2 readOnly:(id)a3 unavailable:(id)a4;
+ (id)infoWithClass:(Class)a0 additionalDecodeClasses:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithClass:(Class)a0 logging:(unsigned long long)a1 readOnly:(id)a2 unavailable:(id)a3 defaultSet:(BOOL)a4 defaultValue:(id)a5 additonalDecodeClasses:(id)a6;

@end
