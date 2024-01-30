@class NSDate;

@interface TVPPlaybackImageLoadInfo : NSObject

@property (retain, nonatomic) id identifier;
@property (nonatomic) double requestedTime;
@property (retain, nonatomic) NSDate *requestedDate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } requestedCMTime;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (copy, nonatomic) id /* block */ timeBasedHandler;
@property (copy, nonatomic) id /* block */ dateBasedHandler;

- (void).cxx_destruct;
- (id)description;
- (void)callCompletionHandlerWithImage:(id)a0 actualCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 actualDate:(id)a2;

@end
