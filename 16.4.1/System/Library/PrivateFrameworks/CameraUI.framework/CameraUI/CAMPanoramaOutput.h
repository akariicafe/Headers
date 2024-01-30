@class CAMCaptureEngine;

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput

@property (readonly, weak, nonatomic) CAMCaptureEngine *_engine;
@property (readonly, nonatomic) long long photoEncodingBehavior;

- (id)initWithEngine:(id)a0;
- (void)changeToDirection:(long long)a0;
- (void)changeToEncodingBehavior:(long long)a0;
- (void).cxx_destruct;

@end
