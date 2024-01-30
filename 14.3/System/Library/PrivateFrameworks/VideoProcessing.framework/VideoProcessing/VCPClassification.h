@class NSString;

@interface VCPClassification : NSObject

@property (retain) NSString *sceneId;
@property float duration;
@property float sumConfidence;

- (void).cxx_destruct;
- (id)initWithSceneId:(id)a0 withDuration:(float)a1 withConfidence:(float)a2;

@end
