@protocol MAPropertyTypeProtocol;

@interface KGPropertyValue : NSObject

@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) id<MAPropertyTypeProtocol> maPropertyValue;

+ (id)kgPropertiesWithMAProperties:(id)a0;
+ (id)kgPropertyValueWithMAPropertyValue:(id)a0;

- (id)initForSubclasses;
- (id)description;

@end
