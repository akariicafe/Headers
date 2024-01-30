@class NSSet, NSDictionary, NSString;

@interface MPPropertySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *properties;
@property (readonly, nonatomic) NSDictionary *relationships;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertySetWithProperties:(id)a0;
+ (id)emptyPropertySet;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProperties:(id)a0 relationships:(id)a1;
- (BOOL)containsPropertySet:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)propertySetByIntersectingWithPropertySet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)propertySetByCombiningWithPropertySet:(id)a0;
- (void).cxx_destruct;
- (id)_stateDumpObject;

@end
