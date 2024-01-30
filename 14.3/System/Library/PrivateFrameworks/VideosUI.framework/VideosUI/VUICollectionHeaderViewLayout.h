@class TVImageLayout, VUITextLayout;

@interface VUICollectionHeaderViewLayout : TVViewLayout

@property (retain, nonatomic) TVImageLayout *imageViewLayout;
@property (readonly, nonatomic) VUITextLayout *titleTextLayout;
@property (readonly, nonatomic) VUITextLayout *subtitleTextLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;
+ (id)maxImageContentSizeCategory;

- (id)init;
- (void).cxx_destruct;

@end
