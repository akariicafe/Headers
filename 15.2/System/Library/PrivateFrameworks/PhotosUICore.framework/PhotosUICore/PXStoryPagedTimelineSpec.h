@interface PXStoryPagedTimelineSpec : NSObject

@property (nonatomic) struct CGSize { double width; double height; } regularPageSize;
@property (nonatomic) struct CGSize { double width; double height; } keyPageSize;
@property (nonatomic) double regularInterpageSpacing;
@property (nonatomic) double keyInterpageSpacing;
@property (nonatomic) BOOL displayOneAssetPerPage;

- (id)description;

@end
