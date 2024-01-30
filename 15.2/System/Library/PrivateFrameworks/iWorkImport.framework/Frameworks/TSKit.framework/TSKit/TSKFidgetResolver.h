@interface TSKFidgetResolver : NSObject {
    id _values[10];
    double _times[10];
    unsigned long long _head;
}

@property (nonatomic) double fidgetThreshold;
@property (readonly, nonatomic) id nonFidgetValue;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)a0;
- (void)pushValue:(id)a0 withTime:(double)a1;
- (void)p_advanceHead;
- (void)pushValue:(id)a0;

@end
