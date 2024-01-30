@class NSArray, MKArtworkDataSourceCache;

@interface MKTransitInfoLabelView : _MKUILabel {
    double _maxWidth;
    double _spaceBetweenIcons;
    id /* block */ _textForTruncationGenerator;
    BOOL _hasCustomShieldSize;
    BOOL _hasCustomIconSize;
    BOOL _hasCustomFont;
}

@property (nonatomic) long long iconSize;
@property (nonatomic) long long shieldSize;
@property (copy, nonatomic) NSArray *labelItems;
@property (nonatomic) double spaceBetweenShields;
@property (nonatomic) double maxShieldHeight;
@property (retain, nonatomic) MKArtworkDataSourceCache *artworkCache;

+ (long long)shieldSizeForContentSizeCategory:(id)a0;
+ (long long)iconSizeForContentSizeCategory:(id)a0;
+ (id)stringAttributesForFont:(id)a0 lineBreakMode:(long long)a1;

- (void)setFont:(id)a0;
- (id)initWithMapItem:(id)a0 maxWidth:(double)a1;
- (id)initWithLabelItems:(id)a0 iconSize:(long long)a1 shieldSize:(long long)a2 spaceBetweenShields:(double)a3 maxWidth:(double)a4;
- (void)_setFont:(id)a0 custom:(BOOL)a1;
- (void)_setupLabelInfo;
- (id)_generateText;
- (id)_stringAttributes;
- (id)_imageForLabelItem:(id)a0;
- (id)_imageForArtworkDataSource:(id)a0;
- (id)_imageForShieldDataSource:(id)a0;
- (void)setSpaceBetweenIcons:(double)a0;
- (void)setMaxWidth:(double)a0 textForTruncationGenerator:(id /* block */)a1;
- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (void)setMapItem:(id)a0;

@end
