@protocol PGEventEnrichment;

@interface PGTripHighlightTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) id<PGEventEnrichment> collection;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (BOOL)_useSplitTimeTitlesIfNeeded;

@end
