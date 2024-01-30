@class NSDictionary;

@interface PHEntityKeyMap : NSObject {
    NSDictionary *_propertyKeysByEntityKey;
    NSDictionary *_entityKeysByPropertyKey;
}

+ (void)assertPropertyKey:(id)a0 doesNotExistForEntityKey:(id)a1 inEntityKeysByProperty:(id)a2;
+ (id)transposePropertyKeysByEntityKey:(id)a0;

- (id)entityKeyForPropertyKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithPropertyKeysByEntityKey:(id)a0;
- (id)propertyKeyForEntityKey:(id)a0;

@end
