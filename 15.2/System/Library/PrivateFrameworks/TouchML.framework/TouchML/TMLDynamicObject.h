@class NSMutableDictionary;

@interface TMLDynamicObject : NSObject

@property (readonly, nonatomic) NSMutableDictionary *properties;

+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)dynamicPropertyType:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
