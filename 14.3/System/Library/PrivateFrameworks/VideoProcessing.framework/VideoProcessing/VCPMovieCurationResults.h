@class PHAsset, NSMutableArray;

@interface VCPMovieCurationResults : NSObject

@property (readonly, nonatomic) PHAsset *phAsset;
@property (readonly, retain, nonatomic) NSMutableArray *highlights;

- (void).cxx_destruct;
- (id)initWithPHAsset:(id)a0;

@end
