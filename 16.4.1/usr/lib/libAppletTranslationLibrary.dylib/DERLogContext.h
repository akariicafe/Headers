@interface DERLogContext : NSObject {
    struct _CircularBuffer { char *x0; char *x1; char *x2; unsigned long long x3; unsigned char x4[0]; } *circBuff;
    unsigned char circBuffStorage[6144];
}

- (void)dealloc;
- (id)init;
- (void)dumpLogs;

@end
