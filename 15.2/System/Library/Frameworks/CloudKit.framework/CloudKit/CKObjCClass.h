@class NSString, NSDictionary, NSArray;

@interface CKObjCClass : NSObject {
    NSDictionary *_propertiesByName;
    NSArray *_sortedProperties;
}

@property (readonly, nonatomic) Class handle;
@property (readonly, nonatomic) NSString *name;

+ (id)classForHandle:(Class)a0;
+ (id)classForObject:(id)a0;

- (id)propertyForName:(id)a0;
- (id)initWithHandle:(Class)a0;
- (id)allProperties;
- (void).cxx_destruct;

@end
