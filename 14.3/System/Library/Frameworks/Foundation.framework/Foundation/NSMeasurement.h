@class NSUnit;

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding> {
    NSUnit *_unit;
    double _doubleValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUnit *unit;
@property (readonly) double doubleValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_performOperation:(long long)a0 withMeasurement:(id)a1;
- (id)measurementBySubtractingMeasurement:(id)a0;
- (id)measurementByConvertingToUnit:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithDoubleValue:(double)a0 unit:(id)a1;
- (id)description;
- (id)measurementByAddingMeasurement:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)canBeConvertedToUnit:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
