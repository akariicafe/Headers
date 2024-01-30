@class NSURL;

@interface CAMTransientPairedVideo : NSObject

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillDisplayTime;
@property (readonly, nonatomic) long long filterType;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 stillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 filterType:(long long)a2;

@end
