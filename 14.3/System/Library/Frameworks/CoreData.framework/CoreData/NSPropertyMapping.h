@class NSString, NSExpression, NSDictionary, NSArray;

@interface NSPropertyMapping : NSObject <NSSecureCoding> {
    void *_reserved;
    NSArray *_transformValidations;
    NSArray *_propertyTransforms;
    NSString *_name;
    NSExpression *_valueExpression;
    NSDictionary *_userInfo;
    struct __propertyMappingFlags { unsigned char _isInUse : 1; unsigned int _reservedPropertyMapping : 31; } _propertyMappingFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property (retain) NSExpression *valueExpression;
@property (retain) NSDictionary *userInfo;

+ (void)initialize;

- (BOOL)isEditable;
- (void)_createCachesAndOptimizeState;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_initWithDestinationName:(id)a0 valueExpression:(id)a1;
- (id)_propertyTransforms;
- (id)_transformValidations;
- (id)initWithName:(id)a0 valueExpression:(id)a1;
- (void)_setIsEditable:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_setPropertyTransforms:(id)a0;
- (void)_setTransformValidations:(id)a0;
- (void)_throwIfNotEditable;
- (void)encodeWithCoder:(id)a0;

@end
