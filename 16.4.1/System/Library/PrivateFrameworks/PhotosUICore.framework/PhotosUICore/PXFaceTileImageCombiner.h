@interface PXFaceTileImageCombiner : NSObject {
    unsigned long long _currentGeneration;
}

+ (void)initialize;
+ (id)_generateCombinedImageFromImages:(id)a0 context:(id)a1;
+ (id)placeholderImageForNumberOfItems:(unsigned long long)a0 context:(id)a1;

- (void)_returnCombinedImage:(id)a0 generation:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (void)requestCombinedImageForItems:(id)a0 context:(id)a1 resultHandler:(id /* block */)a2;

@end
