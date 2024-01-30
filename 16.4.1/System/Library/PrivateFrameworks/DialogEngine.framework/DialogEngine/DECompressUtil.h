@interface DECompressUtil : NSObject

+ (BOOL)advanceZStream:(struct z_stream_s { char *x0; unsigned int x1; unsigned long long x2; char *x3; unsigned int x4; unsigned long long x5; char *x6; struct internal_state *x7; void /* function */ *x8; void /* function */ *x9; void *x10; int x11; unsigned long long x12; unsigned long long x13; } *)a0 function:(void /* function */ *)a1 input:(id)a2 output:(id)a3 flush:(int)a4 streamEnded:(BOOL *)a5;
+ (void)initZStream:(struct z_stream_s { char *x0; unsigned int x1; unsigned long long x2; char *x3; unsigned int x4; unsigned long long x5; char *x6; struct internal_state *x7; void /* function */ *x8; void /* function */ *x9; void *x10; int x11; unsigned long long x12; unsigned long long x13; } *)a0;

@end
