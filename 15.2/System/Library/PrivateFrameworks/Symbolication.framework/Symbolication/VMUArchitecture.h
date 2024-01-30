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
- (int)cpuType;
- (void)encodeWithCoder:(id)a0;
- (int)cpuSubtype;
- (id)description;
- (BOOL)is32Bit;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCpuType:(int)a0 cpuSubtype:(int)a1;
- (BOOL)isLittleEndian;
- (BOOL)isEqualToArchitecture:(id)a0;
- (BOOL)isBigEndian;
- (BOOL)matchesArchitecture:(id)a0;

@end
