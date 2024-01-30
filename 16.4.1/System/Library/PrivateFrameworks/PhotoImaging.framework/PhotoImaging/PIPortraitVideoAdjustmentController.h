@class NSArray, NSNumber, NSDictionary;

@interface PIPortraitVideoAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *disparityKeyframes;
@property (retain, nonatomic) NSNumber *aperture;
@property (retain, nonatomic) NSDictionary *cinematographyState;
@property (nonatomic) long long debugMode;
@property (nonatomic) unsigned long long renderingVersionAtCapture;

- (id)visualInputKeys;
- (id)_keyframesForKey:(id)a0 class:(Class)a1;
- (void)_setKeyframes:(id)a0 forKey:(id)a1;
- (id)pasteKeysForMediaType:(long long)a0;
- (void)trimToTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 usingScript:(id)a1;

@end
