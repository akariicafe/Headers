@class NSArray, _UIStatusBarImageView, NSString;

@interface _UIStatusBarIndicatorItem : _UIStatusBarItem

@property (copy, nonatomic) NSArray *currentImageNamePrefixes;
@property (retain, nonatomic) _UIStatusBarImageView *imageView;
@property (readonly, nonatomic) NSString *indicatorEntryKey;
@property (readonly, nonatomic) BOOL isTemplateImage;
@property (readonly, nonatomic) BOOL flipsForRightToLeftLayoutDirection;

- (id)imageNameForUpdate:(id)a0;
- (void).cxx_destruct;
- (id)imageForUpdate:(id)a0;
- (BOOL)shouldUpdateIndicatorForIdentifier:(id)a0;
- (void)_create_imageView;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (id)dependentEntryKeys;
- (id)systemImageNameForUpdate:(id)a0;

@end
