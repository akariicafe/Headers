@interface HVFLoader : NSObject {
    struct LoaderCBF { void /* function */ **_vptr$Loader; struct BinaryReader { unsigned char *cur; unsigned char *end; } tableData; unsigned long long formatFlags; unsigned short versMajor; unsigned short versMinor; unsigned long long partCount; struct BinaryReader { unsigned char *cur; unsigned char *end; } partIndexOffsets; } loader;
}

@property (readonly, nonatomic) id /* block */ partLoader;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTableData:(id)a0;
- (unsigned long long)countParts;
- (struct HVF_Part { void /* function */ **x0; } *)loadPartAtIndex:(unsigned long long)a0 usingPartCache:(struct HVF_PartCache { void /* function */ **x0; } *)a1;

@end
