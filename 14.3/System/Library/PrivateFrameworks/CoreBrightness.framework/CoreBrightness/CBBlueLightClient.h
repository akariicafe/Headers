@class BrightnessSystemClient;

@interface CBBlueLightClient : NSObject {
    BrightnessSystemClient *bsc;
    id /* block */ clientBlock;
    BOOL ownsClient;
    BOOL notificationActive;
    BOOL rangeSet;
    struct { float minCCT; float maxCCT; float midCCT; } defaultCctRange;
    BOOL rangeOverridden;
    struct { float minCCT; float maxCCT; float midCCT; } cctRange;
}

@property BOOL supported;

+ (BOOL)supportsBlueLightReduction;

- (void)disableNotifications;
- (BOOL)setMode:(int)a0;
- (id)init;
- (BOOL)parseStatusDictionary:(id)a0 intoStruct:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a1;
- (BOOL)setActive:(BOOL)a0;
- (BOOL)getWarningStrength:(float *)a0;
- (BOOL)setSchedule:(const struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } *)a0;
- (BOOL)setCCT:(float)a0 withPeriod:(float)a1 commit:(BOOL)a2;
- (void)dealloc;
- (BOOL)setCCTRange:(struct { float x0; float x1; float x2; } *)a0;
- (void)setStatusNotificationBlock:(id /* block */)a0;
- (BOOL)setStrength:(float)a0 commit:(BOOL)a1;
- (BOOL)getCCT:(float *)a0;
- (BOOL)setStrength:(float)a0 withPeriod:(float)a1 commit:(BOOL)a2;
- (BOOL)getWarningCCT:(float *)a0;
- (void)suspendNotifications:(BOOL)a0 force:(BOOL)a1;
- (BOOL)getCCTRange:(struct { float x0; float x1; float x2; } *)a0;
- (BOOL)getStrength:(float *)a0;
- (BOOL)setCCT:(float)a0 commit:(BOOL)a1;
- (void)enableNotifications;
- (BOOL)getBlueLightStatus:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a0;
- (void)suspendNotifications:(BOOL)a0;
- (BOOL)setEnabled:(BOOL)a0 withOption:(int)a1;
- (BOOL)getDefaultCCTRange:(struct { float x0; float x1; float x2; } *)a0;
- (BOOL)setEnabled:(BOOL)a0;
- (id)initWithClientObj:(id)a0;

@end
