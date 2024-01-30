@class NSString, NSSet, _TtC27SiriVirtualDeviceResolution21CapabilityDescription, NSNumber;

@interface SVDCapabilityDescription : NSObject <NSSecureCoding> {
    _TtC27SiriVirtualDeviceResolution21CapabilityDescription *_backing;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *capabilityKey;
@property (readonly, nonatomic) NSSet *valueSet;
@property (readonly, nonatomic) NSNumber *valueRangeLowerBound;
@property (readonly, nonatomic) NSNumber *valueRangeUpperBound;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBacking:(id)a0;
- (id)initWithKey:(id)a0 valueRangeWithLowerBound:(double)a1 upperBound:(double)a2;
- (id)initWithKey:(id)a0 valueSet:(id)a1;

@end
