@class NSMutableArray;

@interface FMMixParameters : NSObject

@property (retain, nonatomic) NSMutableArray *volumeKeyFrames;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)appendVolumeKeyframe:(id)a0;
- (id)lastVolumeKeyFrame;
- (float)volumeValueAtTime:(long long)a0;
- (void)insertVolumeKeyframe:(id)a0;
- (BOOL)volumeKeyframesAreValid;
- (BOOL)removeRedundantVolumeKeyFrames;

@end
