@class NSArray, BWColorLookupCache, FigColorCubeMetalFilter;

@interface BWMultiFilterThumbnailNode : BWNode {
    struct CGSize { double width; double height; } _thumbnailSize;
    NSArray *_filters;
    int _maxLossyCompressionLevel;
    BWColorLookupCache *_colorLookupCache;
    FigColorCubeMetalFilter *_filter;
    struct opaqueCMFormatDescription { } *_mostRecentFormatDescription;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithFilters:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1 maxLossyCompressionLevel:(int)a2;

@end
