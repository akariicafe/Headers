@class PHAsset, NSMutableArray, NSMutableDictionary;

@interface VCPMovieCurationResults : NSObject

@property (readonly, nonatomic) PHAsset *phAsset;
@property (readonly, retain, nonatomic) NSMutableArray *highlights;
@property (retain, nonatomic) NSMutableDictionary *results;

- (void).cxx_destruct;
- (id)initWithPHAsset:(id)a0;

@end
