@class TVImageLayout, VUIMediaTagsViewLayout, VUITextLayout, VUIProductUberBackgroundViewLayout;

@interface VUIProductBannerLayout : TVViewLayout {
    long long _sizeClass;
    unsigned long long _contentType;
}

@property (retain, nonatomic) TVImageLayout *logoImageLayout;
@property (retain, nonatomic) VUITextLayout *logoTextLayout;
@property (retain, nonatomic) TVImageLayout *coverArtImageLayout;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) TVImageLayout *decorationImageLayout;
@property (readonly, nonatomic) VUITextLayout *subTextLayout;
@property (readonly, nonatomic) VUITextLayout *episodeInfoTextLayout;
@property (readonly, nonatomic) VUITextLayout *descriptionTextLayout;
@property (readonly, nonatomic) VUITextLayout *descriptionTitleTextLayout;
@property (readonly, nonatomic) VUIMediaTagsViewLayout *tagsLayout;
@property (readonly, nonatomic) VUIMediaTagsViewLayout *infoTagsLayout;
@property (readonly, nonatomic) VUITextLayout *promoTextLayout;
@property (readonly, nonatomic) double maxCoverArtImageHeight;
@property (readonly, nonatomic) VUITextLayout *disclaimerTextLayout;
@property (readonly, nonatomic) VUITextLayout *availabilityTextLayout;
@property (readonly, nonatomic) TVImageLayout *availabilityImageLayout;
@property (readonly, nonatomic) VUIProductUberBackgroundViewLayout *uberBackgroundViewLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1 sizeClass:(long long)a2 contentType:(unsigned long long)a3;
+ (id)_coverArtImageShadow;

- (void).cxx_destruct;
- (void)updateWithSizeClass:(long long)a0 contentSizeCategoryIsAccessibility:(BOOL)a1;
- (id)initWithSizeClass:(long long)a0 contentType:(unsigned long long)a1;
- (void)_createLayoutsWithSizeClass:(long long)a0 contentType:(unsigned long long)a1;

@end
