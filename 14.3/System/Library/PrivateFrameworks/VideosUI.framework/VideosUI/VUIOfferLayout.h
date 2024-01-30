@class TVImageLayout, VUIMediaTagsViewLayout, VUITextLayout, VUIButtonLayout, NSShadow, UIColor;

@interface VUIOfferLayout : TVViewLayout

@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) TVImageLayout *appIconLayout;
@property (retain, nonatomic) TVImageLayout *logoLayout;
@property (retain, nonatomic) VUITextLayout *channelNameTextLayout;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUITextLayout *subtitleTextLayout;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUITextLayout *belowCardTextLayout;
@property (retain, nonatomic) TVImageLayout *badgeLayout;
@property (retain, nonatomic) VUIMediaTagsViewLayout *tagsLayout;
@property (retain, nonatomic) VUIButtonLayout *versionsButtonLayout;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) struct TVCornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;
+ (id)subtitleTextLayout;

- (id)init;
- (void).cxx_destruct;

@end
