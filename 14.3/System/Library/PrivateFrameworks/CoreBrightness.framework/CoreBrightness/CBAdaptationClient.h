@class BrightnessSystemClient;

@interface CBAdaptationClient : NSObject {
    BrightnessSystemClient *bsc;
    BOOL ownsClient;
    int _mode;
    BOOL _modeSet;
}

@property BOOL supported;

+ (BOOL)supportsAdaptation;

- (id)init;
- (void)dealloc;
- (BOOL)getEnabled;
- (BOOL)setAdaptationMode:(int)a0 withPeriod:(float)a1;
- (BOOL)overrideStrengths:(float *)a0 forModes:(int *)a1 nModes:(int)a2;
- (BOOL)setWeakestAdaptationModeFromArray:(int *)a0 withLength:(int)a1 andPeriod:(float)a2;
- (BOOL)getStrengths:(float *)a0 nStrengths:(int)a1;
- (int)getAdaptationMode;
- (BOOL)setEnabled:(BOOL)a0;
- (id)initWithClientObj:(id)a0;
- (BOOL)animateFromWeakestAdaptationModeInArray:(int *)a0 withLength:(int)a1 toWeakestInArray:(int *)a2 withLength:(int)a3 withProgress:(float)a4 andPeriod:(float)a5;

@end
