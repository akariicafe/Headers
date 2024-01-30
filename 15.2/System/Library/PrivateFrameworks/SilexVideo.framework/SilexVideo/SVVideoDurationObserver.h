@class NSString, SVKeyValueObserver;
@protocol SVPlayerItemObserving;

@interface SVVideoDurationObserver : NSObject <SVVideoDurationObserving>

@property (readonly, nonatomic) id<SVPlayerItemObserving> playerItemObserver;
@property (retain, nonatomic) SVKeyValueObserver *playerItemDurationObserver;
@property (nonatomic) double duration;
@property (copy, nonatomic, setter=onChange:) id /* block */ changeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithPlayerItemObserver:(id)a0;

@end
