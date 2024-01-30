@class NSArray, NSString;

@interface _MPCPlayerSeekCommand : _MPCPlayerItemCommand <MPCPlayerSeekCommand>

@property (readonly, nonatomic) unsigned long long seekSupport;
@property (nonatomic) BOOL prefersNegativeBackwardSkipIntervals;
@property (copy, nonatomic) NSArray *preferredBackwardJumpIntervals;
@property (copy, nonatomic) NSArray *preferredForwardJumpIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)beginSeekWithDirection:(long long)a0;
- (void).cxx_destruct;
- (id)endSeek;
- (id)jumpByInterval:(double)a0;
- (id)changePositionToElapsedInterval:(double)a0;
- (id)_seekCommandWithMediaRemoteCommand:(unsigned int)a0 options:(id)a1;
- (id)initWithResponse:(id)a0 seekSupport:(unsigned long long)a1;

@end
