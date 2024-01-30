@interface CPMSStateReader : NSObject

+ (id)log;
+ (id)copyCPMSControlStateSnapshots;
+ (id)copyCPMSPmaxState:(int *)a0;
+ (id)getCPMSControlStateSnapshotDictionary:(struct CPMSPPMControlStateSnapshot { unsigned long long x0; float x1[5]; int x2; float x3; float x4; float x5; float x6; float x7; struct CPMSPPMPowerBudget { unsigned char x0; unsigned char x1; struct CPMSPPMPowerLevelScalar { char x0; unsigned int x1; } x2[3]; } x8[20]; struct CPMSPPMPowerBudget { unsigned char x0; unsigned char x1; struct CPMSPPMPowerLevelScalar { char x0; unsigned int x1; } x2[3]; } x9[20]; unsigned int x10[5]; unsigned char x11; int x12[3]; unsigned int x13; unsigned char x14; unsigned int x15; BOOL x16; unsigned int x17[3]; float x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; float x23[6]; int x24; } *)a0;
+ (id)getPowerBudgetDictionary:(struct CPMSPPMPowerBudget { unsigned char x0; unsigned char x1; struct CPMSPPMPowerLevelScalar { char x0; unsigned int x1; } x2[3]; } *)a0;
+ (id)timescaleDisplayName:(char)a0;

@end
