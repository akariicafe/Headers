@class PXAssetVariationRenderProvider, NSProgress;

@interface _PUOneUpLivePhotoVariationSuggestionInfo : NSObject

@property (nonatomic) long long variationType;
@property (retain, nonatomic) PXAssetVariationRenderProvider *renderProvider;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (nonatomic) BOOL didBeginRendering;
@property (nonatomic) BOOL didAddRenderProgress;

- (void).cxx_destruct;

@end
