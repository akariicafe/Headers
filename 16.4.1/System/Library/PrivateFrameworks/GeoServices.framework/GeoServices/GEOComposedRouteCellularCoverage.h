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
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)cellularCoverageAtOffset:(double)a0;
- (void)enumerateCoverageRangesWithBlock:(id /* block */)a0;
- (id)initWithOffsets:(id)a0 coverage:(id)a1 routeLength:(double)a2;

@end
