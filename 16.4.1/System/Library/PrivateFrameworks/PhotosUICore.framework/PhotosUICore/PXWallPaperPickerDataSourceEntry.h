@class NSDictionary, PHFetchResult;

@interface PXWallPaperPickerDataSourceEntry : NSObject

@property (retain, nonatomic) PHFetchResult *suggestions;
@property (retain, nonatomic) NSDictionary *keyAssetBySuggestionUUID;

- (void).cxx_destruct;

@end
