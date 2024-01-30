@class NSArray, NSMutableSet;

@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying> {
    NSMutableSet *_internalAccessories;
}

@property (readonly, copy) NSArray *accessories;

+ (BOOL)isAccessorySupported:(id)a0;
+ (id)shortDescription;

- (id)initWithUser:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUser:(id)a0 accessories:(id)a1;
- (id)shortDescription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
