@class NSString, NSObject;
@protocol PLResourceDataStore, PLResourceDataStoreKey, PLResourceIdentity;

@interface PHResourceChooserListResourceInfo : NSObject <PHRecyclableObject, NSCopying>

@property (readonly, nonatomic) unsigned int recipeID;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) unsigned int resourceVersion;
@property (readonly, nonatomic) struct CGSize { double width; double height; } approximateSize;
@property (readonly, nonatomic) float resourceScale;
@property (readonly, nonatomic) BOOL isDerivative;
@property (readonly, nonatomic) BOOL isPrimaryFormat;
@property (readonly, nonatomic) BOOL canDownload;
@property (readonly, nonatomic) NSObject<PLResourceDataStore> *store;
@property (readonly, nonatomic) NSObject<PLResourceDataStoreKey> *key;
@property (readonly, nonatomic) NSObject<PLResourceIdentity> *identity;
@property (readonly, nonatomic) short localAvailabilityTarget;
@property (nonatomic) BOOL locallyGeneratableOnDemand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResourceType:(unsigned int)a0 recipeID:(unsigned int)a1 resourceVersion:(unsigned int)a2 approximateSize:(struct CGSize { double x0; double x1; })a3 resourceScale:(double)a4 isDerivative:(BOOL)a5 isPrimaryFormat:(BOOL)a6 canDownload:(BOOL)a7 locallyGeneratableOnDemand:(BOOL)a8 store:(id)a9 key:(id)a10 identity:(id)a11 localAvailabilityTarget:(short)a12;
- (void)populateWithResourceType:(unsigned int)a0 recipeID:(unsigned int)a1 resourceVersion:(unsigned int)a2 approximateSize:(struct CGSize { double x0; double x1; })a3 resourceScale:(double)a4 isDerivative:(BOOL)a5 isPrimaryFormat:(BOOL)a6 canDownload:(BOOL)a7 locallyGeneratableOnDemand:(BOOL)a8 store:(id)a9 key:(id)a10 identity:(id)a11 localAvailabilityTarget:(short)a12;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)prepareForReuse;

@end
