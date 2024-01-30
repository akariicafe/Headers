@interface TSKFidgetResolver : NSObject {
    id _values[10];
    double _times[10];
    unsigned long long _head;
}

@property (nonatomic) double fidgetThreshold;
@property (readonly, nonatomic) id nonFidgetValue;

- (id)init;
- (void).cxx_destruct;
- (void)p_advanceHead;
- (unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)a0;
- (void)pushValue:(id)a0;
- (void)pushValue:(id)a0 withTime:(double)a1;

@end
