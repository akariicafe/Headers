@class NSString, NSArray;

@interface HKFullMedicationSearchResult : NSObject

@property (readonly, copy, nonatomic) NSString *productId;
@property (readonly, copy, nonatomic) NSString *packagingName;
@property (readonly, copy, nonatomic) NSString *packagingNDC;
@property (readonly, copy, nonatomic) NSString *productBrandName;
@property (readonly, copy, nonatomic) NSString *productGenericName;
@property (readonly, copy, nonatomic) NSString *route;
@property (readonly, copy, nonatomic) NSString *doseForm;
@property (readonly, copy, nonatomic) NSArray *ingredients;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithProductId:(id)a0 packagingName:(id)a1 packagingNDC:(id)a2 productBrandName:(id)a3 productGenericName:(id)a4 route:(id)a5 doseForm:(id)a6;

@end
