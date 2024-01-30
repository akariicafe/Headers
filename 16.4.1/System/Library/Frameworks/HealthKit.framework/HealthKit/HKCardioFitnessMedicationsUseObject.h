@interface HKCardioFitnessMedicationsUseObject : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _options;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL medicationsAreSet;
@property (readonly) BOOL takingCalciumChannelBlockers;
@property (readonly) BOOL takingBetaBlockers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithCardioFitnessMedicationsUseOptions:(unsigned long long)a0;

@end
