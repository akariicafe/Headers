@class NSArray, PTCinematographyFocusFramesOptions;

@interface PTCinematographyFocusFrames : NSObject

@property (retain, nonatomic) NSArray *frames;
@property (copy, nonatomic) PTCinematographyFocusFramesOptions *options;

- (void).cxx_destruct;
- (long long)_framesIndex:(unsigned long long)a0 earlierBy:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithFrames:(id)a0 options:(id)a1;
- (long long)startIndexForLinearRackFocusPullToFrameAtIndex:(unsigned long long)a0;

@end
