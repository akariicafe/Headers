@interface CHDDataValuesCollection : NSObject {
    struct __CFData { } *mPackedValues;
    unsigned long long mDataValueCount;
    struct __CFDictionary { } *mIndexToDataValueMap;
    BOOL mContainsStringValue;
}

- (struct CHDDataPoint { unsigned long long x0; struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } x1; unsigned long long x2; } *)dataPointAtIndex:(unsigned long long)a0;
- (void)cleanup;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (BOOL)addDataPoint:(struct CHDDataPoint { unsigned long long x0; struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } x1; unsigned long long x2; } *)a0;
- (void)dealloc;
- (void)finishReading;
- (id)initWithDataPointCount:(unsigned long long)a0;
- (void)setupBufferForValues:(unsigned long long)a0;
- (struct CHDDataPoint { unsigned long long x0; struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } x1; unsigned long long x2; } *)dataPointWithIndex:(unsigned long long)a0;
- (void)resetWithDataPointCount:(unsigned long long)a0;
- (BOOL)addDataValue:(id)a0;
- (id)dataValueAtIndex:(unsigned long long)a0;
- (id)contentFormatAtIndex:(unsigned long long)a0 resources:(id)a1;
- (id)dataValueWithIndex:(unsigned long long)a0;
- (unsigned long long)maxDataPointIndex;
- (BOOL)containsStringValue;

@end
