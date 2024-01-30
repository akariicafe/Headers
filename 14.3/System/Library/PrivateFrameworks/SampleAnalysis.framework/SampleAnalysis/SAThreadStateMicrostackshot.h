@interface SAThreadStateMicrostackshot : SAThreadState {
    unsigned char _microstackshotFlags;
    unsigned short _cpuSpeed100Mhz;
}

+ (id)stateWithMicrostackshot:(const struct micro_snapshot { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned char x4; unsigned short x5; } *)a0 thread:(const struct thread_snapshot { unsigned int x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; int x8; int x9; int x10; int x11; char x12; char x13; char x14; char x15; char x16; char x17[3]; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22[4]; unsigned long long x23[4]; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; char x34[64]; } *)a1 startTimestamp:(id)a2 endTimestamp:(id)a3 startSampleIndex:(unsigned long long)a4 endSampleIndex:(unsigned long long)a5 leafUserFrame:(id)a6 leafKernelFrame:(id)a7 machTimebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a8;

- (BOOL)isUserActive;
- (BOOL)isMicrostackshot;
- (BOOL)isInterruptRecord;
- (BOOL)isTimerArmingRecord;
- (BOOL)isIORecord;
- (BOOL)isUserMode;
- (BOOL)isBatteryAndUserActivityValid;
- (BOOL)isOnBattery;
- (unsigned int)cpuSpeedMhz;
- (unsigned char)microstackshotFlags;

@end
