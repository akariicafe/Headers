@interface BWStillImageCaptureDelegateCallbackInfo : NSObject

@property (readonly, nonatomic) unsigned int flag;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (readonly, nonatomic) BOOL isPreBracketFrame;

- (id)initWithFlag:(unsigned int)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isPreBracketFrame:(BOOL)a2;
- (id)initWithFlag:(unsigned int)a0;

@end
