@class TVImageLayout, VUITextLayout;

@interface VUIListLockupCollectionViewCellLayout : TVViewLayout

@property (nonatomic) long long imagePosition;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUITextLayout *subtitleTextLayout;
@property (retain, nonatomic) VUITextLayout *descriptionTextLayout;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) TVImageLayout *appIconLayout;
@property (retain, nonatomic) TVImageLayout *monogramImageLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;
+ (struct CGSize { double x0; double x1; })_defaultImageSize;
+ (struct CGSize { double x0; double x1; })_defaultAppIconSize;

- (id)init;
- (void).cxx_destruct;

@end
