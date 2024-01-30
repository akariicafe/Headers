@class ATXHistogramData;

@interface ATXGuardedHistData : NSObject {
    ATXHistogramData *_histogramData;
    unsigned short _bucketCount;
    BOOL _filter;
}

- (id)initWithHistogramData:(id)a0 bucketCount:(unsigned short)a1 filter:(BOOL)a2;
- (void).cxx_destruct;

@end
