@class NSArray, NSDictionary;

@interface VUILibraryMediaCollectionViewModel : NSObject

@property (retain, nonatomic) NSArray *seasonViewModels;
@property (retain, nonatomic) NSDictionary *seasonBySeasonIdentifier;
@property (retain, nonatomic) NSDictionary *episodeShelfViewControllerBySeasonIdentifier;
@property (retain, nonatomic) NSDictionary *productLockupViewBySeasonIdentifier;
@property (retain, nonatomic) NSDictionary *episodesBySeasonIdentifer;
@property (readonly, nonatomic) BOOL hasContent;

- (void).cxx_destruct;

@end
