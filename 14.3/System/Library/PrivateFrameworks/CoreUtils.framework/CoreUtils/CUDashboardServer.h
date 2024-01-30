@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface CUDashboardServer : NSObject {
    unsigned char _key[32];
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_logFile;
    int _sockV4;
    NSObject<OS_dispatch_source> *_sockV4Source;
    int _sockV6;
    NSObject<OS_dispatch_source> *_sockV6Source;
}

@property (copy, nonatomic) NSString *logFilePath;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)activate;
- (void)invalidate;
- (void)_readHandler:(int)a0;

@end
