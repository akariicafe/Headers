@class NSString, PXMediaProvider;
@protocol PXDisplayAsset;

@interface PXGridInlinePlaybackRecord : NSObject

@property (nonatomic) long long visibilityScore;
@property (nonatomic) double distanceToCenterScore;
@property (nonatomic) double cellSizeScore;
@property (nonatomic) BOOL isInvalid;
@property (readonly, copy) NSString *diagnosticScoresDescription;
@property (copy) NSString *diagnosticLog;
@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) id geometryReference;
@property (nonatomic) long long desiredPlayState;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } bestVideoTimeRange;
@property (readonly, nonatomic) float videoScore;
@property (readonly, nonatomic) float curationScore;

- (id)description;
- (void).cxx_destruct;
- (void)prepareForVisible;
- (void)prepareForInvisible;
- (id)initWithDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;

@end
