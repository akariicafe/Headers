@class NSString;

@interface VMUVMRegion : NSObject {
    struct _VMURange { unsigned long long location; unsigned long long length; } range;
    unsigned int prot;
    unsigned int maxProt;
    NSString *type;
    NSString *path;
    BOOL summarized;
    unsigned char external_pager;
    unsigned char share_mode;
    int purgeable;
    unsigned long long virtual_pages;
    unsigned long long pages_resident;
    unsigned long long pages_shared_now_private;
    unsigned long long pages_swapped_out;
    unsigned long long pages_dirtied;
    unsigned long long ref_count;
    unsigned int user_tag;
    unsigned long long object_id;
    unsigned long long offset;
    unsigned int nesting_depth;
    unsigned char is_submap : 1;
    unsigned char is_macho_region : 1;
    unsigned char is_unused_data_region : 1;
    unsigned char is_unused_data_page_shared_with_active_content : 1;
    unsigned char is_wired : 1;
    unsigned int reserved_flags : 27;
    unsigned long long mallocBlockCount;
    unsigned int mallocTypeFlag;
    unsigned int zone_index;
    unsigned int coalesced_region_count;
    unsigned long long resident_size;
    unsigned long long shared_now_private_size;
    unsigned long long swapped_out_size;
    unsigned long long dirty_size;
    unsigned long long purgable_vol_size;
    unsigned long long purgable_non_vol_size;
    unsigned long long purgable_empty_size;
    unsigned long long reusable_size;
}

+ (void)initialize;
+ (id)columnHeadersWithOptions:(unsigned long long)a0 maximumLength:(unsigned long long)a1;
+ (id)columnHeadersWithOptions:(unsigned long long)a0 maximumLength:(unsigned long long)a1 memorySizeDivisor:(unsigned int)a2 hasFractionalPageSizes:(BOOL)a3;

- (unsigned long long)address;
- (unsigned long long)length;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })range;
- (void)getVMRegionData:(struct _VMUVMRegionData { unsigned long long x0; unsigned long long x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; unsigned int x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned int x15; unsigned int x16; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned int x22 : 27; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; } *)a0 withSimpleSerializer:(id)a1;
- (unsigned int)maxProtection;
- (BOOL)isWired;
- (id)description;
- (unsigned int)protection;
- (id)descriptionWithOptions:(unsigned long long)a0 maximumLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithOptions:(unsigned long long)a0 maximumLength:(unsigned long long)a1 memorySizeDivisor:(unsigned int)a2 hasFractionalPageSizes:(BOOL)a3;
- (BOOL)hasSameInfoAsRegion:(id)a0;
- (id)type;
- (id)path;
- (void)setVMRegionDataExtra:(struct _VMUVMRegionDataExtra { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)getVMRegionDataExtra:(struct _VMUVMRegionDataExtra { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)isSubmap;
- (id)initWithVMRegionData:(struct _VMUVMRegionData { unsigned long long x0; unsigned long long x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; unsigned int x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned int x15; unsigned int x16; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned int x22 : 27; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; } *)a0 encodedVersion:(long long)a1 simpleSerializer:(id)a2 error:(id *)a3;
- (id)breakAtLength:(unsigned long long)a0;
- (void)addInfoFromRegion:(id)a0;
- (BOOL)isNullRegion;

@end
