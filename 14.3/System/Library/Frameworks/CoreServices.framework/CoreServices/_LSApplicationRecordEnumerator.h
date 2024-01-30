@class NSURL;

@interface _LSApplicationRecordEnumerator : _LSRecordEnumerator {
    NSURL *_volumeURL;
    unsigned long long _options;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *__value_; } __end_cap_; } _bundleIdentifiersOrUnits;
    unsigned int _container;
}

@property unsigned int bundleClass;

- (BOOL)_getContainer:(unsigned int *)a0 context:(struct LSContext { id x0; } *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithVolumeURL:(id)a0 options:(unsigned long long)a1;
- (id).cxx_construct;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (id)_applicationRecordWithContext:(struct LSContext { id x0; } *)a0 bundleIdentifierOrUnit:(unsigned int)a1;
- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (BOOL)_evaluateBundleNoIO:(unsigned int)a0 data:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; struct LSVersionNumber { unsigned char x0[32]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned short x23; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; struct LSBundleMoreFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x6; unsigned int x7; int x8; struct LSVersionNumber { unsigned char x0[32]; } x9; struct LSVersionNumber { unsigned char x0[32]; } x10; unsigned int x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned int x31; unsigned long long x32; unsigned long long x33; unsigned int x34; unsigned int x35; unsigned long long x36; unsigned int x37; unsigned long long x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned char x54; unsigned char x55; unsigned char x56; unsigned int x57; unsigned int x58[1]; unsigned int x59; struct LSAppClipFields { unsigned int x0; } x60; int x61; unsigned int x62; unsigned int x63; unsigned int x64; unsigned int x65; } *)a1 context:(struct LSContext { id x0; } *)a2;

@end
