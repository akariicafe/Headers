@class TVImageLayout, VUITextLayout;

@interface VUICollectionHeaderViewLayout : TVViewLayout

@property (retain, nonatomic) TVImageLayout *imageViewLayout;
@property (readonly, nonatomic) VUITextLayout *titleTextLayout;
@property (readonly, nonatomic) VUITextLayout *subtitleTextLayout;

+ (id)maxImageContentSizeCategory;

- (id)init;
- (void).cxx_destruct;

@end
