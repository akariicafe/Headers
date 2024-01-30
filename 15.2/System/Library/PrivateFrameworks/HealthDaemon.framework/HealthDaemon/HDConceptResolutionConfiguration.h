@class NSString;

@interface HDConceptResolutionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long recordCategoryType;

- (id)initWithCountryCode:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCountryCode:(id)a0 recordCategoryType:(long long)a1;

@end
