@class SKNode;

@interface NTKChronoUpperSubDial : NTKChronoSubDial {
    SKNode *_upper60Ticks;
    SKNode *_upper30Ticks;
    SKNode *_upper63Ticks;
    SKNode *_30mLabels;
    SKNode *_15mLabels;
    SKNode *_3mLabels;
    SKNode *_2mLabels;
}

- (void).cxx_destruct;
- (void)applyTransitionFraction:(double)a0 fromTimeScale:(unsigned long long)a1 toTimeScale:(unsigned long long)a2;
- (id)initWithRadius:(double)a0 forDevice:(id)a1;
- (id)labelsForTimeScale:(unsigned long long)a0;
- (id)ticksForTimeScale:(unsigned long long)a0;
- (void)updateTimeScale:(unsigned long long)a0;
- (void)colorize:(id)a0;

@end
