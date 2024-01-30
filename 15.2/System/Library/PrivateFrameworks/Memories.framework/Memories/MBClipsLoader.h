@class NSArray, NSMutableArray;

@interface MBClipsLoader : NSObject

@property (retain) NSMutableArray *clips;
@property (nonatomic) BOOL showOnlyFavorites;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (retain) NSArray *previousClips;

- (void)startLoading;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)load;
- (id)initWithShowOnlyFavorites:(BOOL)a0;

@end
