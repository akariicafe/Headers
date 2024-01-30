@class UIColor;

@interface WBSBookmarkFolderTouchIconConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long maximumNumberOfThumbnailsPerRow;
@property (readonly, nonatomic) unsigned long long maximumNumberOfThumbnailRows;
@property (readonly, nonatomic) unsigned long long maximumNumberOfThumbnailIcons;
@property (readonly, nonatomic) double thumbnailIconScaleFactor;
@property (readonly, nonatomic) double thumbnailIconOuterMarginScaleFactor;
@property (readonly, nonatomic) double thumbnailIconInnerMarginScaleFactor;
@property (readonly, nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (readonly, nonatomic) double shadowBlurRadius;
@property (readonly, nonatomic) BOOL fillIconWithBackgroundColor;
@property (readonly, nonatomic) UIColor *backgroundColorForEmptySlots;
@property (readonly, nonatomic) UIColor *colorForDarkeningThumbnailBackground;

- (id)initFor2x2Layout;
- (void)_commonWBSBookmarkFolderIconConfigurationInit;
- (id)initForTabGroup;
- (id)initFor3x3Layout;
- (void).cxx_destruct;

@end
