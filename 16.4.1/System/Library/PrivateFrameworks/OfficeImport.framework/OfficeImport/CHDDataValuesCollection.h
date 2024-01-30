@interface CHDDataValuesCollection : NSObject {
    struct __CFData { } *mPackedValues;
    unsigned long long mDataValueCount;
    struct __CFDictionary { } *mIndexToDataValueMap;
    BOOL mContainsStringValue;
}

- (void)cleanup;
- (unsigned long long)count;
- (BOOL)addDataPoint:(struct CHDDataPoint { unsigned long long x0; struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } x1; unsigned long long x2; } *)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (struct CHDDataPoint { unsigned long long x0; struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } x1; unsigned long long x2; } *)dataPointAtIndex:(unsigned long long)a0;
- (void)finishReading;
- (id)contentFormatAtIndex:(unsigned long long)a0 resources:(id)a1;
- (BOOL)addDataValue:(id)a0;
- (BOOL)containsStringValue;
- (struct CHDDataPoint { unsigned long long x0; struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } x1; unsigned long long x2; } *)dataPointWithIndex:(unsigned long long)a0;
- (id)dataValueAtIndex:(unsigned long long)a0;
- (id)dataValueWithIndex:(unsigned long long)a0;
- (id)initWithDataPointCount:(unsigned long long)a0;
- (unsigned long long)maxDataPointIndex;
- (void)resetWithDataPointCount:(unsigned long long)a0;
- (void)setupBufferForValues:(unsigned long long)a0;

@end
