@class IDSURI, NSNumber;

@interface HMDAccountHandleModel : HMDBackingStoreModelObject

@property (retain, nonatomic) IDSURI *idsURI;
@property (retain, nonatomic) NSNumber *local;

+ (id)properties;
+ (id)schemaHashRoot;

@end
