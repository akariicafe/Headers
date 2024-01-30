@class TVImageLayout, VUITextLayout;

@interface VUICollectionHeaderViewLayout : TVViewLayout

@property (retain, nonatomic) TVImageLayout *imageViewLayout;
@property (readonly, nonatomic) VUITextLayout *titleTextLayout;
@property (readonly, nonatomic) VUITextLayout *subtitleTextLayout;

+ (id)maxImageContentSizeCategory;

- (void).cxx_destruct;
- (id)init;

@end
