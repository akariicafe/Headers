@class NSArray, NSString, CADisplayMode, CADisplayAttributes, CADisplayPreferences;

@interface CADisplay : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSArray *availableModes;
@property (retain, nonatomic) CADisplayMode *currentMode;
@property (readonly, nonatomic) CADisplayMode *preferredMode;
@property (copy, nonatomic) NSString *colorMode;
@property BOOL allowsVirtualModes;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } safeBounds;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) unsigned int displayId;
@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic) unsigned int seed;
@property (readonly, nonatomic) unsigned int connectionSeed;
@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic) long long tag;
@property (readonly, nonatomic) int processId;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) double heartbeatRate;
@property (readonly, nonatomic) long long minimumFrameDuration;
@property (readonly, nonatomic, getter=isOverscanned) BOOL overscanned;
@property (copy, nonatomic) NSString *overscanAdjustment;
@property (readonly, nonatomic) double overscanAmount;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } overscanAmounts;
@property (readonly, nonatomic, getter=isCloned) BOOL cloned;
@property (readonly, nonatomic, getter=isCloning) BOOL cloning;
@property (readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported;
@property (readonly, nonatomic) NSString *nativeOrientation;
@property (readonly, nonatomic) NSString *currentOrientation;
@property (readonly, nonatomic) unsigned int odLUTVersion;
@property (readonly, nonatomic) BOOL supportsExtendedColors;
@property (readonly, nonatomic) CADisplayAttributes *externalDisplayAttributes;
@property (readonly, nonatomic) int linkQuality;
@property (nonatomic) double latency;
@property (copy, nonatomic) CADisplayPreferences *preferences;
@property (readonly, nonatomic) NSString *productName;

+ (id)displays;
+ (id)TVOutDisplay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)updateDisplays;
+ (id)mainDisplay;

- (id)immutableCopy;
- (id)supportedHDRModes;
- (BOOL)setDisplayProperties:(id)a0;
- (id)preferredModeWithCriteria:(id)a0;
- (void)dealloc;
- (void)update;
- (id)description;
- (void)_invalidate;
- (id)allowedHDRModes;
- (id)preferredHDRModes;
- (void)overrideDisplayTimings:(id)a0;
- (id)_initWithDisplay:(struct Display { void /* function */ **x0; struct Mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; struct SpinLock { struct { int x0; } x0; } x2; id x3; struct __CFString *x4; struct __CFString *x5; unsigned int x6; unsigned int x7; unsigned int x8; struct __CFString *x9; struct __CFString *x10; struct __CFString *x11; struct ModeSet { struct vector<CA::WindowServer::Display::Mode, std::__1::allocator<CA::WindowServer::Display::Mode> > { struct Mode *x0; struct Mode *x1; struct __compressed_pair<CA::WindowServer::Display::Mode *, std::__1::allocator<CA::WindowServer::Display::Mode> > { struct Mode *x0; } x2; } x0; struct set<std::__1::tuple<unsigned short, unsigned short>, std::__1::less<std::__1::tuple<unsigned short, unsigned short> >, std::__1::allocator<std::__1::tuple<unsigned short, unsigned short> > > { struct __tree<std::__1::tuple<unsigned short, unsigned short>, std::__1::less<std::__1::tuple<unsigned short, unsigned short> >, std::__1::allocator<std::__1::tuple<unsigned short, unsigned short> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::tuple<unsigned short, unsigned short>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<std::__1::tuple<unsigned short, unsigned short> > > { unsigned long long x0; } x2; } x0; } x1; } x12; struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 24; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; } x0; unsigned long long x1; } x0; } x13; struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 24; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; } x0; unsigned long long x1; } x0; } x14; struct Bounds { int x0; int x1; int x2; int x3; } x15; struct Bounds { int x0; int x1; int x2; int x3; } x16; struct Vec2<float> { float x0; float x1; } x17; struct EDIDAttributes { int x0; int x1; int x2; int x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } x18; double x19; int x20; unsigned int x21; int x22; double x23; double x24; unsigned int x25; struct DisplayShmemInfo { void /* function */ **x0; struct SpinLock { struct { int x0; } x0; } x1; struct Ref<CA::Render::Shmem> { struct Shmem *x0; } x2; struct DisplayTimings *x3; } x26; unsigned int x27; unsigned int x28; unsigned int x29; int x30; unsigned int x31; long long x32; double x33; unsigned long long x34; unsigned long long x35; unsigned char x36 : 1; unsigned char x37 : 1; unsigned char x38 : 1; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; unsigned char x42 : 1; unsigned char x43 : 1; unsigned char x44 : 1; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; } *)a0;
- (id)flipBookWithCapacity:(unsigned long long)a0;

@end
