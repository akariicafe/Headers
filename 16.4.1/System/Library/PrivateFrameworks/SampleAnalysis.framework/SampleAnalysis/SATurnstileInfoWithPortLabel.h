@class NSString;

@interface SATurnstileInfoWithPortLabel : SATurnstileInfo {
    NSString *_portName;
    unsigned short _portFlags;
    unsigned char _portDomain;
}

@property (retain) NSString *portName;
@property unsigned long long portFlags;
@property unsigned long long portDomain;

- (void).cxx_destruct;
- (id)initWithKCDataTurnstileInfo:(const struct stackshot_thread_turnstileinfo_v2 { unsigned long long x0; unsigned long long x1; unsigned char x2; unsigned char x3; unsigned long long x4; short x5; } *)a0;

@end
