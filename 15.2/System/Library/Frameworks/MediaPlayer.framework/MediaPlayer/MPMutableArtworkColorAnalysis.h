@class UIColor;

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;

- (void)setSecondaryTextColor:(id)a0;
- (void)setPrimaryTextColor:(id)a0;
- (void)setPrimaryTextColorLight:(BOOL)a0;
- (void)setBackgroundColorLight:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSecondaryTextColorLight:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;

@end
