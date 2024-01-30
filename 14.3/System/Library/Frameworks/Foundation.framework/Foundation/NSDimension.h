@class NSUnitConverter;

@interface NSDimension : NSUnit <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long specifier;
@property (readonly, copy) NSUnitConverter *converter;

+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;
+ (id)baseUnit;

- (id)dimension;
- (void)dealloc;
- (id)initWithSpecifier:(unsigned long long)a0 symbol:(id)a1 converter:(id)a2;
- (id)initWithSymbol:(id)a0 converter:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
