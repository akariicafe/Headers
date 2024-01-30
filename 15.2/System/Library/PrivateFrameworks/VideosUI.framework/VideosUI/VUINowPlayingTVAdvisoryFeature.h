@class NSArray, NSString;

@interface VUINowPlayingTVAdvisoryFeature : VUINowPlayingTimeBoundFeature <VUINowPlayingTVAdvisoryFeature>

@property (copy, nonatomic) NSArray *advisoryDisabledTimeRanges;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic, getter=isSkippable) BOOL skippable;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 startTime:(double)a1 duration:(double)a2;

@end
