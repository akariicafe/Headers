@class NSString, MiroMetadataRange, PHAsset, NSDate;

@interface MiroAssetClusteringVideoSegment : NSObject <MiroMediaItem, NSCopying>

@property (nonatomic) float frameRate;
@property (retain, nonatomic) PHAsset *videoAsset;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) MiroMetadataRange *sourceRange;
@property (retain, nonatomic) MiroMetadataRange *trimRange;
@property (readonly, nonatomic) double rangeScore;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoSegmentFromAsset:(id)a0 starting:(double)a1 duration:(double)a2;

- (id)localIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)rangeScoreExplanation;

@end
