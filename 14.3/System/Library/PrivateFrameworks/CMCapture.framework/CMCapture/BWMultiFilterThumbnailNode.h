@class NSArray, BWColorLookupCache, FigColorCubeMetalFilter;

@interface BWMultiFilterThumbnailNode : BWNode {
    struct CGSize { double width; double height; } _thumbnailSize;
    NSArray *_filters;
    BWColorLookupCache *_colorLookupCache;
    FigColorCubeMetalFilter *_filter;
    struct opaqueCMFormatDescription { } *_mostRecentFormatDescription;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (int)_loadAndConfigureFilterBundle;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)videoOutput;
- (id)initWithFilters:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1;

@end
