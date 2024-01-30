@class NSArray, NSMutableSet;

@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying> {
    NSMutableSet *_internalAccessories;
}

@property (readonly, copy) NSArray *accessories;

+ (BOOL)isAccessorySupported:(id)a0;
+ (id)shortDescription;

- (id)initWithUser:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)initWithUser:(id)a0 accessories:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
