@interface SVXPlaybackRequestInfo : NSObject

@property (nonatomic) BOOL didStart;
@property (nonatomic) BOOL didFinish;
@property (nonatomic) double start;
@property (nonatomic) double finish;

- (double)duration;

@end
