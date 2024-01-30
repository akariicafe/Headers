@class NSString, NSArray, CPAccNavParamKey;

@interface CPAccNavParam : NSObject

@property (retain, nonatomic) NSString *property;
@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) Class collectionGeneric;
@property (nonatomic) BOOL encodeable;
@property (retain, nonatomic) Class objcType;
@property (readonly, nonatomic) CPAccNavParamKey *primaryKey;

+ (long long)_accNavTypeForUpdate:(Class)a0 parameter:(id)a1 key:(id)a2;
+ (id)_encodedTypeForClass:(Class)a0 property:(id)a1;
+ (Class)_objcTypeForUpdate:(Class)a0 parameter:(id)a1;
+ (id)paramWithProperty:(id)a0 keys:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)configureTypesForUpdate:(Class)a0;
- (id)copySettingCollectionGeneric:(Class)a0;
- (id)copySettingEncodeable:(BOOL)a0;

@end
