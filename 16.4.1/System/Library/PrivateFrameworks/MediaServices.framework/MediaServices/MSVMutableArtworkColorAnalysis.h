@class NSString;

@interface MSVMutableArtworkColorAnalysis : MSVArtworkColorAnalysis

@property (retain, nonatomic) NSString *backgroundColorHex;
@property (retain, nonatomic) NSString *primaryTextColorHex;
@property (retain, nonatomic) NSString *secondaryTextColorHex;
@property (nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;

- (void)setPrimaryTextColor:(id)a0;
- (void)setPrimaryTextColorLight:(BOOL)a0;
- (void)setSecondaryTextColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setSecondaryTextColorLight:(BOOL)a0;
- (void)setBackgroundColorLight:(BOOL)a0;

@end
