@class HKSPProperty, NSString;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface HKSPChange : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSPProperty *property;
@property (readonly, nonatomic) id<NSObject, NSSecureCoding, NSCopying> changedValue;
@property (readonly, nonatomic) id<NSObject, NSSecureCoding, NSCopying> originalValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedValueClasses;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithProperty:(id)a0 changedValue:(id)a1 originalValue:(id)a2;

@end
