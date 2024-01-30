@class MTTreatment, NSDictionary;

@interface MTTreatmentContext : NSObject

@property (retain, nonatomic) MTTreatment *treatment;
@property (retain, nonatomic) NSDictionary *metrics;

- (void).cxx_destruct;
- (id)initWithTreatment:(id)a0 metrics:(id)a1;

@end
