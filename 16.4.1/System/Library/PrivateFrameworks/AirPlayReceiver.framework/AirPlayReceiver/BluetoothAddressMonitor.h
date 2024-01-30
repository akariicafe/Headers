@class CBPeripheralManager, NSObject;
@protocol OS_dispatch_queue;

@interface BluetoothAddressMonitor : NSObject {
    struct OpaqueFigCFWeakReferenceHolder { } *_systemInfoWeak;
    NSObject<OS_dispatch_queue> *_queue;
    CBPeripheralManager *_cbManager;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;
- (id)initWithSystemInfo:(struct OpaqueAPReceiverSystemInfo { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct OpaqueAPAdvertiserInfo *x9; unsigned char x10; unsigned char x11; struct __CFBoolean *x12; unsigned char x13[6]; unsigned char x14[16]; unsigned char x15; unsigned char x16; unsigned char x17; struct __CFString *x18; struct __CFString *x19; unsigned char x20; unsigned char x21; struct __CFString *x22; unsigned char x23; unsigned char x24; struct __CFString *x25; unsigned char x26; struct __CFString *x27; unsigned char x28; struct __CFString *x29; struct __CFString *x30; struct __CFString *x31; unsigned char x32; unsigned char x33; struct __CFDictionary *x34; long long x35; int x36; struct __CFString *x37; struct __CFString *x38; unsigned char x39; struct __CFString *x40; struct __CFString *x41; struct __CFString *x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; unsigned char x50; int x51; int x52; struct MGNotificationTokenStruct *x53; char x54[64]; char *x55; unsigned char x56; unsigned char x57; unsigned char x58; struct __CFString *x59; int x60; unsigned char x61; unsigned char x62; char x63[8]; unsigned long long x64; struct __CFString *x65; struct __CFString *x66; char x67[8]; unsigned char x68; char x69[64]; id x70; unsigned char x71; int x72; int x73; id x74; struct __CFString *x75; struct CGSize { double x0; double x1; } x76; struct CGSize { double x0; double x1; } x77; struct CGSize { double x0; double x1; } x78; struct __CFString *x79; struct __CFString *x80; struct __CFString *x81; struct __CFString *x82; int x83; int x84; unsigned char x85; unsigned char x86; unsigned char x87; unsigned int x88; float x89; struct __CFNumber *x90; struct __CFNumber *x91; unsigned char x92; struct __CFData *x93; id x94; struct OpaqueAPSPowerAssertion *x95; unsigned char x96; struct __CFData *x97; } *)a0 queue:(id)a1;

@end
