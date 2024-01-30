@class NSString, NSMutableDictionary, CPMemoryPool;

@interface SBIconLabelImageCache : NSObject <BSDescriptionProviding> {
    NSMutableDictionary *_labelImages;
}

@property (readonly, nonatomic) CPMemoryPool *grayPool;
@property (readonly, nonatomic) CPMemoryPool *colorPool;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maxLabelSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long numberOfCachedImages;
@property (readonly, nonatomic) unsigned long long numberOfCacheHits;
@property (readonly, nonatomic) unsigned long long numberOfCacheMisses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithMaxLabelSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)labelImageForParameters:(id)a0;
- (id)cachedLabelImagesWithParametersPassingTest:(id /* block */)a0;
- (id)generateAndStoreLabelImageForParameters:(id)a0;
- (id)cachedLabelImageForParameters:(id)a0;
- (void)cacheLabelImageForParameters:(id)a0;
- (id)succinctDescription;
- (void)removeLabelImageForParameters:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)removeLabelImagesWithParametersPassingTest:(id /* block */)a0;

@end
