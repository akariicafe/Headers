@class BMDSL;
@protocol BMDSLScheduler;

@interface BMDSLSubscribeOn : BPSPublisher

@property (readonly, nonatomic) BMDSL *upstream;
@property (readonly, nonatomic) id<BMDSLScheduler> scheduler;

- (id)initWithUpstream:(id)a0 scheduler:(id)a1;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;

@end
