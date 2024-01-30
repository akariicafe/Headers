@class NSMutableDictionary;

@interface FPKernelProcess : FPProcess {
    NSMutableDictionary *_auxData;
}

+ (id)_kextTagsWithKextInfo:(id)a0;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_createSymbolicator;
+ (id)kextTags;
+ (id)_nameForWiredInfo:(struct mach_memory_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned short x8; unsigned short x9; unsigned short x10[2]; unsigned long long x11[3]; char x12[80]; } *)a0 withKexts:(id)a1 andSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a2 zoneNames:(struct mach_zone_name { char x0[80]; } *)a3 zoneCount:(unsigned int)a4;
+ (void)_setNameForRegion:(id)a0 withWiredInfo:(struct mach_memory_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned short x8; unsigned short x9; unsigned short x10[2]; unsigned long long x11[3]; char x12[80]; } *)a1 andKexts:(id)a2 andSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a3 zoneNames:(struct mach_zone_name { char x0[80]; } *)a4 zoneCount:(unsigned int)a5;

- (void).cxx_destruct;
- (BOOL)_isAlive;
- (void)gatherData;
- (id)initWithBsdInfo:(struct proc_bsdinfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[32]; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned long long x20; unsigned long long x21; } *)a0;
- (BOOL)_populateTask;
- (void)_addWiredData:(struct mach_memory_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned short x8; unsigned short x9; unsigned short x10[2]; unsigned long long x11[3]; char x12[80]; } *)a0 withCount:(unsigned int)a1 zoneNames:(struct mach_zone_name { char x0[80]; } *)a2 zoneCount:(unsigned int)a3 toArray:(id)a4;
- (unsigned long long)_gatherPageSize;
- (id)auxData;

@end
