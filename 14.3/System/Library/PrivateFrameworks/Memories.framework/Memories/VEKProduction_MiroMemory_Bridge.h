@class PHAsset, VEKProgressWatcher, AVPlayerItem, MiroMemory, NSSet, NSString, VEKProductionExport, MiroAutoEditor, VEKBlueprint;

@interface VEKProduction_MiroMemory_Bridge : NSObject

@property (retain, nonatomic) MiroMemory *memory;
@property (retain) AVPlayerItem *playerItem;
@property (retain) MiroAutoEditor *autoEditor;
@property (retain) VEKProgressWatcher *watcherProperty;
@property (retain, nonatomic) VEKProductionExport *productionExport;
@property (nonatomic) unsigned long long nonLocalPickedAssetCount;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (nonatomic) double requestedDuration;
@property (retain, nonatomic) VEKBlueprint *blueprint;
@property (retain, nonatomic) NSSet *suggestions;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *songID;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)maxDuration;
- (double)maximumDuration;
- (id)initWithDataRepresentation:(id)a0;
- (BOOL)isPending;
- (id)dataRepresentation;
- (void)removeAsset:(id)a0;
- (void)addAsset:(id)a0;
- (id)moodIDmap;
- (void)removeClip:(id)a0;
- (void)setRangeOfInterest:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 forClip:(id)a1;
- (void)setVolume:(long long)a0 forClip:(id)a1;
- (long long)pickedItemCount;
- (long long)moodForMoodID:(id)a0;
- (id)moodIDForMood:(long long)a0;
- (id)requestedMood;
- (id)memoryViewedDate;
- (void)_generateProjectWithNaturalSize:(struct CGSize { double x0; double x1; })a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)updateBlueprintOnMemory;
- (void)updateSuggestionsOnMemory;
- (void)generateProjectWithNaturalSize:(struct CGSize { double x0; double x1; })a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)fudgedDurationInfo;

@end
