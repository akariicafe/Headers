@class NSArray, NSSet;

@interface HMAssistantAccessControl : HMAccessControl <NSSecureCoding, NSCopying, NSMutableCopying> {
    unsigned long long _options;
    NSSet *_accessories;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly) BOOL allowUnauthenticatedRequests;
@property (readonly, copy) NSArray *accessories;

+ (BOOL)isAccessorySupported:(id)a0;
+ (id)shortDescription;

- (id)initWithUser:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)options;

@end
