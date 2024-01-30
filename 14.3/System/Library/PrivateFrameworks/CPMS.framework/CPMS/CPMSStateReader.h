@interface CPMSStateReader : NSObject

+ (id)log;
+ (id)copyCPMSControlStateSnapshots;
+ (id)timescaleDisplayName:(char)a0;
+ (id)copyCPMSPmaxState:(int *)a0;
+ (id)getCPMSControlStateSnapshotDictionary:(struct CPMSPPMControlStateSnapshot { unsigned long long x0; float x1[5]; int x2; float x3; float x4; float x5; struct CPMSPPMPowerBudget { unsigned char x0; unsigned char x1; struct CPMSPPMPowerLevelScalar { char x0; unsigned short x1; } x2[3]; } x6[16]; struct CPMSPPMPowerBudget { unsigned char x0; unsigned char x1; struct CPMSPPMPowerLevelScalar { char x0; unsigned short x1; } x2[3]; } x7[16]; unsigned int x8[5]; unsigned char x9; int x10[3]; unsigned int x11; unsigned char x12; unsigned int x13; BOOL x14; unsigned int x15[3]; float x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; float x21[6]; float x22[6]; int x23; } *)a0;
+ (id)getPowerBudgetDictionary:(struct CPMSPPMPowerBudget { unsigned char x0; unsigned char x1; struct CPMSPPMPowerLevelScalar { char x0; unsigned short x1; } x2[3]; } *)a0;

@end
