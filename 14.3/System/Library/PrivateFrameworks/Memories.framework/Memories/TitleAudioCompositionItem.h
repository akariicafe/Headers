@class NSString;

@interface TitleAudioCompositionItem : MovieCompositionItem

@property (retain, nonatomic) NSString *baseFilename;

- (void).cxx_destruct;
- (id)speedRangesForSourceRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 destinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithClip:(id)a0 themeID:(id)a1;
- (void)switchToAsset:(int)a0;
- (BOOL)hasSeparateInOut;

@end
