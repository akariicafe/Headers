@class NSString, CIBurstImageSet;

@interface CAMBurstSession : NSObject

@property (nonatomic, setter=_setEstimatedCount:) unsigned long long estimatedCount;
@property (nonatomic, setter=_setCount:) unsigned long long count;
@property (nonatomic, getter=_isFinalized, setter=_setFinalized:) BOOL finalized;
@property (readonly, nonatomic) CIBurstImageSet *_burstImageSet;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addStillImageCaptureResult:(id)a0;
- (void)addStillImageLocalPersistenceResult:(id)a0 withFaces:(id)a1;
- (id)performBurstAnalysisForDevice:(long long)a0;

@end
