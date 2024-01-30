@class FBSDisplayConfiguration, UISApplicationSupportDisplayEdgeInfo;

@interface UISMutableDisplayContext : UISDisplayContext

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (nonatomic) unsigned long long artworkSubtype;
@property (nonatomic) unsigned long long userInterfaceStyle;

- (void)setArtworkSubtype:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUserInterfaceStyle:(unsigned long long)a0;
- (void)setDisplayConfiguration:(id)a0;
- (void)setDisplayEdgeInfo:(id)a0;

@end
