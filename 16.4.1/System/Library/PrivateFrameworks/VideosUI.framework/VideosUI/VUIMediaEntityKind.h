@class NSDictionary, NSString, NSArray;

@interface VUIMediaEntityKind : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *propertyDescriptorsByName;
@property (readonly, copy, nonatomic) NSString *mediaEntityClassName;
@property (copy, nonatomic) NSArray *propertyDescriptors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaEntityClassName:(id)a0;
- (id)propertyDescriptorForName:(id)a0;
- (id)sortingPropertyDescriptorForName:(id)a0;

@end
