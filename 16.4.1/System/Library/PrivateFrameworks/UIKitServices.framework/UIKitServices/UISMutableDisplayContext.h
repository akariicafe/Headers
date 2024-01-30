@class FBSDisplayConfiguration, UISApplicationSupportDisplayEdgeInfo, UISDisplayShape;

@interface UISMutableDisplayContext : UISDisplayContext

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (nonatomic) unsigned long long artworkSubtype;
@property (nonatomic) unsigned long long userInterfaceStyle;
@property (retain, nonatomic) UISDisplayShape *exclusionArea;

- (void)setUserInterfaceStyle:(unsigned long long)a0;
- (void)setDisplayConfiguration:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setArtworkSubtype:(unsigned long long)a0;
- (void)setDisplayEdgeInfo:(id)a0;
- (void)setExclusionArea:(id)a0;

@end
