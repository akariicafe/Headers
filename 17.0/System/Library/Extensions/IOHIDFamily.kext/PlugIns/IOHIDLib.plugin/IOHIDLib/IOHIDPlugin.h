@interface IOHIDPlugin : IOHIDIUnknown2 {
    struct IOCFPlugInInterfaceStruct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; unsigned short x4; unsigned short x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } *_plugin;
}

- (id)init;
- (void)dealloc;
- (int)probe:(id)a0 service:(unsigned int)a1 outScore:(int *)a2;
- (int)stop;
- (int)start:(id)a0 service:(unsigned int)a1;

@end
