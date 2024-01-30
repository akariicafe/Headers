@class NSArray, NSString;
@protocol PXStoryMovieHighlight;

@interface PXStoryMockMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration> {
    NSArray *_highlights;
    id<PXStoryMovieHighlight> _summary;
    id<PXStoryMovieHighlight> _live;
    id<PXStoryMovieHighlight> _movie;
    id<PXStoryMovieHighlight> _fallback;
}

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

- (id)init;
- (void).cxx_destruct;
- (id)initWithLivePhoto:(id)a0;
- (id)initWithFullMovie:(id)a0;
- (id)initWithHighlights:(id)a0 fallback:(id)a1 summary:(id)a2 live:(id)a3 full:(id)a4;
- (id)initWithMovieHighlights:(id)a0;
- (id)initWithMovieSummary:(id)a0;

@end
