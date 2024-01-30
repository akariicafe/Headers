@class UIColor;

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBackgroundColorLight:(BOOL)a0;
- (void)setPrimaryTextColor:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setSecondaryTextColor:(id)a0;
- (void)setSecondaryTextColorLight:(BOOL)a0;
- (void)setPrimaryTextColorLight:(BOOL)a0;

@end
