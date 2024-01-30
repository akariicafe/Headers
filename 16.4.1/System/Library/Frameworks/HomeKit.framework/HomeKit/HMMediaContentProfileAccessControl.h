@class NSArray, NSMutableSet;

@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying> {
    NSMutableSet *_internalAccessories;
}

@property (readonly, copy) NSArray *accessories;

+ (id)shortDescription;
+ (BOOL)isAccessorySupported:(id)a0;

- (id)initWithUser:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithUser:(id)a0 accessories:(id)a1;

@end
