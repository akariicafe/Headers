@class NSArray;

@interface JEDeresNumberTreatmentAction : JETreatmentAction {
    double _precision;
    NSArray *_buckets;
}

- (void).cxx_destruct;
- (id)initWithField:(id)a0 configuration:(id)a1;
- (id)performAction:(id)a0 context:(id)a1;

@end
