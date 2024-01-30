@interface HKCardioFitnessMedicationsUseObject : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _options;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL medicationsAreSet;
@property (readonly) BOOL takingCalciumChannelBlockers;
@property (readonly) BOOL takingBetaBlockers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initWithCardioFitnessMedicationsUseOptions:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
