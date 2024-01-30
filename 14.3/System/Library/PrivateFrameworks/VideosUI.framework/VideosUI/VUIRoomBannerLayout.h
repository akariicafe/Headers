@class TVImageLayout, VUITextLayout;

@interface VUIRoomBannerLayout : TVViewLayout

@property (retain, nonatomic) TVImageLayout *backgroundImageLayout;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUITextLayout *descriptionTextLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
