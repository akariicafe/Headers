@interface MPUCellInvalidationContext : NSObject

@property (nonatomic) BOOL invalidateEverything;
@property (nonatomic) BOOL invalidateDownloadStatus;
@property (nonatomic) BOOL invalidateLayout;
@property (nonatomic, getter=isAnimated) BOOL animated;

@end
