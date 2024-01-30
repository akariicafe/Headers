@class NSString, NSExpression, NSDictionary, NSArray;

@interface NSPropertyMapping : NSObject <NSSecureCoding, NSCopying> {
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

- (void)encodeWithCoder:(id)a0;
- (void)_throwIfNotEditable;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (id)_initWithDestinationName:(id)a0 valueExpression:(id)a1;
- (id)initWithName:(id)a0 valueExpression:(id)a1;

@end
