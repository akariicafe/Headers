@class NSDictionary, NSArray, NSSet;

@interface AXSSMotionTrackingInputConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *plistDictionary;
@property (copy, nonatomic) NSArray *orderedInputPreference;
@property (copy, nonatomic) NSSet *allowedTrackingTypes;
@property (nonatomic) BOOL allowSeparateInputForExpressions;
@property (readonly, copy, nonatomic) NSArray *orderedCameraInputPreference;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlistDictionary:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToMotionTrackingInputConfiguration:(id)a0;
- (id)initWithOrderedInputPreference:(id)a0 allowedTrackingTypes:(id)a1 allowSeparateInputForExpressions:(BOOL)a2;
- (BOOL)supportsTrackingType:(unsigned long long)a0;

@end
