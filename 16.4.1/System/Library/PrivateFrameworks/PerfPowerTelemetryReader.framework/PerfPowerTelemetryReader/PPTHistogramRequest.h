@class NSArray;

@interface PPTHistogramRequest : PPTDataRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *dimensions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDimensions:(id)a0 predicate:(id)a1 timeFilter:(id)a2;

@end
