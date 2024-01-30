@class NSData;

@interface GEOComposedRouteCellularCoverage : NSObject <NSSecureCoding> {
    NSData *_offsetsData;
    NSData *_coverageData;
    unsigned int *_offsets;
    int *_coverage;
    unsigned long long _coverageCount;
    double _routeLength;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (int)cellularCoverageAtOffset:(double)a0;
- (id)initWithOffsets:(id)a0 coverage:(id)a1 routeLength:(double)a2;
- (void)enumerateCoverageRangesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
