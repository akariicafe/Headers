@class BrightnessSystemClient;

@interface CBAdaptationClient : NSObject {
    BrightnessSystemClient *bsc;
    BOOL ownsClient;
    int _mode;
    BOOL _modeSet;
}

@property BOOL supported;

+ (BOOL)supportsAdaptation;

- (BOOL)setEnabled:(BOOL)a0;
- (BOOL)getEnabled;
- (BOOL)setAdaptationMode:(int)a0 withPeriod:(float)a1;
- (BOOL)overrideStrengths:(float *)a0 forModes:(int *)a1 nModes:(int)a2;
- (id)initWithClientObj:(id)a0;
- (id)init;
- (BOOL)setWeakestAdaptationModeFromArray:(int *)a0 withLength:(int)a1 andPeriod:(float)a2;
- (BOOL)animateFromWeakestAdaptationModeInArray:(int *)a0 withLength:(int)a1 toWeakestInArray:(int *)a2 withLength:(int)a3 withProgress:(float)a4 andPeriod:(float)a5;
- (int)getAdaptationMode;
- (BOOL)getStrengths:(float *)a0 nStrengths:(int)a1;
- (void)dealloc;

@end
