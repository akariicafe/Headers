@class NSArray, NSString, NSData;
@protocol PXStoryMovieHighlight;

@interface PXStoryFallbackMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _playbackRange;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _highlightRange;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bestPlaybackRect;
    NSData *_normalizationData;
    float _audioQualityScore;
}

@property (class) struct { long long x0; int x1; unsigned int x2; long long x3; } maxHighlightDuration;

@property (readonly, nonatomic) id<PXStoryMovieHighlight> bestHighlight;
@property (readonly, copy, nonatomic) NSArray *highlights;
@property (readonly, nonatomic) id<PXStoryMovieHighlight> defaultHighlight;
@property (readonly, nonatomic) id<PXStoryMovieHighlight> movieSummary;
@property (readonly, nonatomic) id<PXStoryMovieHighlight> fullMovie;
@property (readonly, nonatomic) id<PXStoryMovieHighlight> livePhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })defaultHighlightRangeForPlaybackRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
+ (id)movieHighlightCurationForDisplayAsset:(id)a0;
+ (id)movieHighlightCurationForLivePhotoAsset:(id)a0;
+ (id)movieHighlightCurationForVideoAsset:(id)a0;

@end
