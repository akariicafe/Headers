@class NSDictionary, NSArray, NSString;

@interface CKObjCClass : NSObject

@property (readonly, nonatomic) NSDictionary *propertiesByName;
@property (readonly, nonatomic) NSArray *sortedProperties;
@property (readonly, nonatomic) Class handle;
@property (readonly, nonatomic) NSString *name;

+ (id)classForObject:(id)a0;
+ (id)classForHandle:(Class)a0;

- (id)propertyForName:(id)a0;
- (id)initWithHandle:(Class)a0;
- (void).cxx_destruct;
- (id)allProperties;

@end
