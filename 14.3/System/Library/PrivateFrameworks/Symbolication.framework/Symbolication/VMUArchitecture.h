@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {
    int _cpuType;
    int _cpuSubtype;
}

+ (void)initialize;
+ (id)currentArchitecture;
+ (id)anyArchitecture;
+ (id)ppcArchitecture;
+ (id)ppc32Architecture;
+ (id)ppc64Architecture;
+ (id)i386Architecture;
+ (id)x86_32Architecture;
+ (id)x86_64Architecture;
+ (id)armArchitecture;
+ (id)architectureWithCpuType:(int)a0 cpuSubtype:(int)a1;

- (BOOL)is64Bit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)cpuType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)is32Bit;
- (id)description;
- (BOOL)isBigEndian;
- (id)initWithCpuType:(int)a0 cpuSubtype:(int)a1;
- (BOOL)isLittleEndian;
- (BOOL)isEqualToArchitecture:(id)a0;
- (BOOL)matchesArchitecture:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)cpuSubtype;
- (void)encodeWithCoder:(id)a0;

@end
