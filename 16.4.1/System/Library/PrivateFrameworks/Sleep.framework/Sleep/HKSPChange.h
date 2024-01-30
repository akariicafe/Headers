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

- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithProperty:(id)a0 changedValue:(id)a1 originalValue:(id)a2;

@end
