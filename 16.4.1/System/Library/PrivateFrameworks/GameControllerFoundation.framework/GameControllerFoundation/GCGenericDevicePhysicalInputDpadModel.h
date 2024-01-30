@interface GCGenericDevicePhysicalInputDpadModel : GCGenericDevicePhysicalInputElementModel

@property (readonly) long long sourceUpExtendedEventFieldIndex;
@property (readonly) long long sourceDownExtendedEventFieldIndex;
@property (readonly) long long sourceLeftExtendedEventFieldIndex;
@property (readonly) long long sourceRightExtendedEventFieldIndex;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
