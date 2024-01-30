@interface CRCodingUtilities : NSObject

+ (double)cgFloatFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (long long)integerFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (void)appendBool:(BOOL)a0 toData:(id)a1;
+ (void)appendCGFloat:(double)a0 toData:(id)a1;
+ (void)appendCodable:(id)a0 toData:(id)a1;
+ (void)appendFloat:(float)a0 toData:(id)a1;
+ (void)appendInteger:(long long)a0 toData:(id)a1;
+ (void)appendPoint:(struct CGPoint { double x0; double x1; })a0 toData:(id)a1;
+ (void)appendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toData:(id)a1;
+ (void)appendRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toData:(id)a1;
+ (void)appendSize:(struct CGSize { double x0; double x1; })a0 toData:(id)a1;
+ (void)appendUInteger:(unsigned long long)a0 toData:(id)a1;
+ (id)arrayFromEncodingData:(id)a0 offset:(unsigned long long *)a1 objectProviderBlock:(id /* block */)a2;
+ (BOOL)boolFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (BOOL)checkValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forDataLength:(unsigned long long)a1;
+ (id)ddScannerResultFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (id)encodingDataForBool:(BOOL)a0;
+ (id)encodingDataForCGFloat:(double)a0;
+ (id)encodingDataForCodable:(id)a0;
+ (id)encodingDataForFloat:(float)a0;
+ (id)encodingDataForInteger:(long long)a0;
+ (id)encodingDataForPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)encodingDataForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)encodingDataForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)encodingDataForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)encodingDataForUInteger:(unsigned long long)a0;
+ (float)floatFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (id)objectDataFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (struct CGPoint { double x0; double x1; })pointFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (struct CGSize { double x0; double x1; })sizeFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (id)stringFromEncodingData:(id)a0 offset:(unsigned long long *)a1;
+ (unsigned long long)unsignedIntegerFromEncodingData:(id)a0 offset:(unsigned long long *)a1;

@end
