@class NSSet;

@interface SignpostFrameLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>

@property (retain, nonatomic) NSSet *contributingPids;
@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) unsigned int swapId;
@property (readonly, nonatomic) unsigned long long totalFrameCount;
@property (readonly, nonatomic) unsigned long long lateFrameCount;

- (void).cxx_destruct;
- (id)initWithFrameLatencyInterval:(id)a0 isLong:(BOOL)a1;
- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 timebaseRatio:(double)a2 swapID:(unsigned int)a3 frameSeed:(unsigned int)a4 totalFrameCount:(unsigned long long)a5 lateFrameCount:(unsigned long long)a6;

@end
