@class PDContainer, NSString, NSMutableDictionary, PDMeasurement;

@interface PDAggregateMeasurement : NSObject

@property (retain, nonatomic) PDContainer *container;
@property (retain, nonatomic) NSString *metric;
@property (retain, nonatomic) NSString *unitString;
@property (retain, nonatomic) NSMutableDictionary *variables;
@property (retain, nonatomic) NSMutableDictionary *labels;
@property (nonatomic) struct running_mean { double x0; double x1; unsigned long long x2; } *values_mean;
@property (nonatomic) struct pooled_mean { struct sum { double x0; double x1; } x0; struct sum { double x0; double x1; } x1; unsigned long long x2; unsigned long long x3; } *stats_mean;
@property (nonatomic) BOOL validMin;
@property (nonatomic) double min;
@property (nonatomic) BOOL validMax;
@property (nonatomic) double max;
@property (nonatomic) unsigned long long samples;
@property (readonly, nonatomic) PDMeasurement *measurement;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContainer:(id)a0 metric:(id)a1 unitString:(id)a2;
- (void)updateWithMeasurement:(id)a0;

@end
