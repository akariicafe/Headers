@class NSString;

@interface SXComponentConditions : SXJSONObject

@property (readonly, nonatomic) NSString *greaterThanSpecVersion;
@property (readonly, nonatomic) NSString *lessThanSpecVersion;

@end
