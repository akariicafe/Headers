@class NSString;

@interface XRVMRegion : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long start;
    unsigned long long length;
    int current_prot;
    int max_prot;
    unsigned char external_pager;
    unsigned char share_mode;
    unsigned char user_tag;
    BOOL is_submap;
    NSString *path;
    NSString *type;
    unsigned int pages_resident;
    unsigned int pages_shared_now_private;
    unsigned int pages_swapped_out;
    unsigned int pages_dirtied;
    unsigned int ref_count;
    unsigned int region_page_shift;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long pageSize;

+ (void)initialize;
+ (unsigned long long)regionIndexInArray:(id)a0 forAddress:(unsigned long long)a1;

- (unsigned long long)dirtySize;
- (id)path;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)residentSize;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)tag;
- (int)maxProtection;
- (id)displayType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)swappedSize;
- (id)description;
- (BOOL)isNullRegion;
- (void).cxx_destruct;
- (unsigned long long)location;
- (unsigned long long)virtualSize;
- (void)_setResident:(unsigned int)a0 dirty:(unsigned int)a1 swapped:(unsigned int)a2 speculative:(unsigned int)a3;
- (int)currentProtection;
- (id)displayPath;
- (id)initWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 regionInfo:(struct vm_region_submap_info_64 { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned char x11; unsigned char x12; int x13; int x14; unsigned int x15; unsigned short x16; unsigned int x17; unsigned long long x18; } *)a2;
- (BOOL)isAdjacentTo:(id)a0;
- (BOOL)isSubmapRegion;
- (BOOL)matchesAddr:(unsigned long long)a0 size:(unsigned long long)a1 regionInfo:(struct vm_region_submap_info_64 { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned char x11; unsigned char x12; int x13; int x14; unsigned int x15; unsigned short x16; unsigned int x17; unsigned long long x18; } *)a2;
- (BOOL)regionMatch:(id)a0;
- (void)setAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (void)setPath:(id)a0 type:(id)a1;
- (BOOL)typeMatches:(id)a0;
- (unsigned int)virtualPages;

@end
