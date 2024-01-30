@class NSData, PHAsset, PHMemory;
@protocol NSFastEnumeration;

@interface PXEditMemoryAction : PXPhotosAction

@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) NSData *redoPhotosGraphData;
@property (readonly, nonatomic) NSData *undoPhotosGraphData;
@property (readonly, nonatomic) long long undoStoryColorGradeKind;
@property (readonly, nonatomic) long long redoStoryColorGradeKind;
@property (readonly, nonatomic) PHAsset *undoKeyAsset;
@property (readonly, nonatomic) PHAsset *redoKeyAsset;
@property (readonly, nonatomic) id<NSFastEnumeration> undoUserCuratedAssets;
@property (readonly, nonatomic) id<NSFastEnumeration> redoUserCuratedAssets;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)_changePhotosGraphData:(id)a0 storyColorGradeKind:(long long)a1 keyAsset:(id)a2 userCuratedAssets:(id)a3 completionHandler:(id /* block */)a4;
- (id)actionNameLocalizationKey;
- (id)initWithMemory:(id)a0 photosGraphData:(id)a1 storyColorGradeKind:(long long)a2 keyAsset:(id)a3 userCuratedAssets:(id)a4;
- (void)performUndo:(id /* block */)a0;

@end
