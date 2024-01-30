@interface MDPathFilter : NSObject {
    struct _MDPlistContainer { } *_plist;
    struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned short x8; unsigned long long x9[0]; } *_commonValues;
    struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } _rootArray;
    struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } _prefixesDictionary;
    struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } _extensionsDictionary;
    struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } _hiddenExtensionsDictionary;
    struct { unsigned short x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; } *_rootElement;
    unsigned short _mountDepth;
    unsigned long long _defaultRule;
    unsigned long long _inheritMask;
    BOOL _processExtensions;
    int _auxValueCount;
    unsigned long long *_auxValues;
    int _leadingDotType;
    int _leadingDotIndex;
    int _icloudDotType;
    int _icloudDotIndex;
    BOOL _isDataROSP;
}

- (id)initWithData:(id)a0;
- (struct _MDPlistContainer { } *)plist;
- (id)data;
- (void)dealloc;
- (struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })filterFullPath:(const char *)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })filter:(const char *)a0 allowBundleCheck:(BOOL)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })filterFullPathTestBundle:(const char *)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })filterPartialPath:(const char *)a0;
- (unsigned long long *)filterSubAuxValues:(struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })a0 count:(int *)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })iCloudPath:(const char *)a0 updateFilter:(struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })a1;
- (id)initWithMDPlist:(struct _MDPlistContainer { } *)a0;
- (BOOL)isDataROSP;
- (unsigned long long)trimBundlePath:(struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })a0 path:(const char *)a1 buffer:(char *)a2 length:(unsigned long long)a3;

@end
