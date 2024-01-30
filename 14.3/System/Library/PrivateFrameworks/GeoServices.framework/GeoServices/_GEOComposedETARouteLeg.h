@class NSArray;

@interface _GEOComposedETARouteLeg : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *steps;
@property (readonly, nonatomic) double travelDuration;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)descriptionWithPrecision:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
