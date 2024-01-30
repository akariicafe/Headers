@class NSString;

@interface OZFxPlugHostPrivateAPI : NSObject <PROAPIObject, FxHostPrivateAPI, FxRenderModelAPIPrivate> {
    struct OZFxPlugSharedBase { void /* function */ **x0; void *x1; id x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; struct PCString { struct __CFString *x0; } x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x20; BOOL x21; BOOL x22; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL x0; } x0; } x23; BOOL x24; BOOL x25; BOOL x26; int x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; struct OZChannelBase *x33; BOOL x34; _Atomic id x35; BOOL x36; BOOL x37; unsigned long long x38; BOOL x39; struct PCMutex { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; } x40; unsigned int x41; } *_plugin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlugin:(struct OZFxPlugSharedBase { void /* function */ **x0; void *x1; id x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; struct PCString { struct __CFString *x0; } x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x20; BOOL x21; BOOL x22; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL x0; } x0; } x23; BOOL x24; BOOL x25; BOOL x26; int x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; struct OZChannelBase *x33; BOOL x34; _Atomic id x35; BOOL x36; BOOL x37; unsigned long long x38; BOOL x39; struct PCMutex { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; } x40; unsigned int x41; } *)a0;
- (float)blendingGamma;
- (BOOL)navigateToTime:(union { double x0; struct *x1; })a0;
- (BOOL)giveEffectUIFocus;
- (id)URLForHostResource:(id)a0 withExtension:(id)a1 subDirectory:(id)a2 inBundle:(id)a3;
- (id)URLForHostResource:(id)a0 withExtension:(id)a1 subDirectory:(id)a2 inBundleWithIdentifier:(id)a3;
- (id)URLForHostResource:(id)a0 withExtension:(id)a1 subDirectory:(id)a2 inBundleWithURL:(id)a3;
- (void)pluginXPCConnectionBroken:(id)a0;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;

@end
