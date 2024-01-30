@interface CIEnhancementHistogram : NSObject {
    double hist[256];
}

+ (id)histogramFromData:(const double *)a0;
+ (id)histogramFromDoubleData:(const double *)a0;
+ (id)histogramFromFloatData:(const float *)a0;

- (const double *)values;

@end
