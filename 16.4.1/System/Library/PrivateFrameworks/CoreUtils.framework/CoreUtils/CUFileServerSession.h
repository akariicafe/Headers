@interface CUFileServerSession : NSObject {
    char _dirPath[1024];
}

@property (nonatomic) struct { int x0; long long x1; long long x2; char *x3; int x4; long long x5; long long x6; int x7; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x8; struct _telldir *x9; } *dirStream;
@property (nonatomic) unsigned long long lastRequestTicks;
@property (nonatomic) unsigned long long sessionID;

@end
