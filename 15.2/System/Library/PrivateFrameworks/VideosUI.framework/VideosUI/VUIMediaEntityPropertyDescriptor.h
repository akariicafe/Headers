@class NSString, NSSet;

@interface VUIMediaEntityPropertyDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sortAsName;
@property (nonatomic) unsigned long long propertyType;
@property (copy, nonatomic) NSString *propertyValueClassName;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) BOOL allowsDefaultValue;
@property (copy, nonatomic) NSSet *sourcePropertyNames;
@property (nonatomic) BOOL retrievesSourcePropertiesAtFetch;
@property (nonatomic) BOOL sourceSupportsFiltering;
@property (copy, nonatomic) id /* block */ sourceFilterValueBlock;
@property (copy, nonatomic) id /* block */ sourceFilterBlock;

+ (id)_classNameFromPropertyType:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateSourceSupportsFiltering;

@end
