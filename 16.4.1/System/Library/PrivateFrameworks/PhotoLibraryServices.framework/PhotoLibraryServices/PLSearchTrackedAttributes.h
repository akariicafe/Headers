@class NSArray;

@interface PLSearchTrackedAttributes : NSObject

@property (retain, nonatomic) NSArray *assetAttributesTrackedForSearch;
@property (retain, nonatomic) NSArray *mediaAnalysisAssetAttributesTrackedForSearch;
@property (retain, nonatomic) NSArray *managedAlbumAttributesTrackedForSearch;
@property (retain, nonatomic) NSArray *fetchingAlbumAttributesTrackedForSearch;
@property (retain, nonatomic) NSArray *memoryAttributesTrackedForSearch;
@property (retain, nonatomic) NSArray *highlightAttributesTrackedForSearch;
@property (retain, nonatomic) NSArray *personAttributesTrackedForSearch;
@property (retain, nonatomic) NSArray *detectedFaceAttributesTrackedForSearch;

- (void).cxx_destruct;

@end
