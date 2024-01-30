@class CompositionTrackGroup, KonaClip;

@interface EditListCompositionState : NSObject <NSCopying>

@property (retain, nonatomic) CompositionTrackGroup *currentTrackGroup;
@property (retain, nonatomic) CompositionTrackGroup *alternateTrackGroup;
@property (nonatomic) KonaClip *previousClip;
@property (nonatomic) KonaClip *clip;
@property (nonatomic) KonaClip *nextClip;
@property (nonatomic) float previousClipVolume;
@property (nonatomic) float clipVolume;
@property (nonatomic) float nextClipVolume;
@property (readonly, nonatomic) int previousClipType;
@property (readonly, nonatomic) int clipType;
@property (readonly, nonatomic) int nextClipType;
@property (nonatomic) struct CGSize { double width; double height; } previousClipNaturalSize;
@property (nonatomic) struct CGSize { double width; double height; } clipNaturalSize;
@property (nonatomic) struct CGSize { double width; double height; } nextClipNaturalSize;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } previousClipTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } clipTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } nextClipTransform;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } videoCompTimeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } audioCompTimeRange;
@property (nonatomic) BOOL previousClipRequiresCA;
@property (nonatomic) BOOL clipRequiresCA;
@property (nonatomic) BOOL nextClipRequiresCA;
@property (nonatomic) int audioStartOffset;
@property (nonatomic) int audioEndOffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)swapForTransition;

@end
