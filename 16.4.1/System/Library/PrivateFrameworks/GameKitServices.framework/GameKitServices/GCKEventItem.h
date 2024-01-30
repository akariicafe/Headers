@interface GCKEventItem : NSObject

@property struct { int x0; char *x1; int x2; unsigned int x3; } *event;
@property unsigned int pid;

- (void)dealloc;
- (id)init;
- (id)initWithEvent:(struct { int x0; char *x1; int x2; unsigned int x3; } *)a0 remotePeer:(unsigned int)a1;

@end
