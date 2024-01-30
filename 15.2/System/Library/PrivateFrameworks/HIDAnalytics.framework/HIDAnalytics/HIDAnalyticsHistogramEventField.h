@class NSString;

@interface HIDAnalyticsHistogramEventField : NSObject <HIDAnalyticsEventFieldProtocol> {
    unsigned char _segmentCount;
    struct _HIDAnalyticsHistogramSegment { unsigned char x0; struct _HIDAnalyticsHistogramBucket *x1; } *_segments;
}

@property (readonly) NSString *fieldName;
@property (weak) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createBuckets:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; } *)a0 count:(long long)a1;
- (id)initWithAttributes:(id)a0 segments:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; } *)a1 count:(long long)a2;
- (void)setIntegerValue:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
