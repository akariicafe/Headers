@class NSString;

@interface CNFileServices : NSObject <CNFileServices>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (int)close:(int)a0;
- (id)NSTemporaryDirectory;
- (int)flock:(int)a0 :(int)a1;
- (int)open:(const char *)a0 :(int)a1 :(unsigned short)a2;
- (int)errnoValue;
- (int)fcntl_flock:(int)a0 :(int)a1 :(struct flock { long long x0; long long x1; int x2; short x3; short x4; } *)a2;
- (int)fstatfs:(int)a0 :(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a1;
- (int)statfs:(const char *)a0 :(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a1;

@end
