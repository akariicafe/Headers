@class NSString, NSArray, NSDictionary, NSNumber;

@interface NTKPigmentCollectionConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *defaultColorOptionName;
@property (copy, nonatomic) NSString *fallbackDefaultColorOptionName;
@property (copy, nonatomic) NSString *defaultConfigAttributeName;
@property (copy, nonatomic) NSArray *defaultGalleryColorNames;
@property (copy, nonatomic) NSNumber *sensitivity;
@property (copy, nonatomic) NSNumber *isAddable;
@property (copy, nonatomic) NSNumber *supportsSlider;
@property (copy, nonatomic) NSNumber *excludesDuotone;
@property (copy, nonatomic) NSDictionary *migration;
@property (copy, nonatomic) NSString *featureFlag;
@property (copy, nonatomic) NSNumber *sortedByHue;
@property (copy, nonatomic) NSArray *exclusions;
@property (copy, nonatomic) NSString *collectionOverride;
@property (copy, nonatomic) NSNumber *sku;

+ (BOOL)supportsSecureCoding;
+ (id)collectionConfigFromProtoBuffer:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)applyCollectionOverrideNameOnItems:(id)a0;
- (void)overridePropertiesFromConfig:(id)a0;
- (id)protoBuffer;
- (void)removeExcludedItemsFromList:(id)a0;

@end
