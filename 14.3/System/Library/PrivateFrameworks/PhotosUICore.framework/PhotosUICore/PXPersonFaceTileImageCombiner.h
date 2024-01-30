@interface PXPersonFaceTileImageCombiner : NSObject {
    unsigned long long _currentGeneration;
}

+ (void)initialize;
+ (id)_generateCombinedImageFromImages:(id)a0 context:(id)a1;
+ (id)placeholderImageForNumberOfFaces:(unsigned long long)a0 context:(id)a1;

- (void)requestImageForPersons:(id)a0 context:(id)a1 resultHandler:(id /* block */)a2;
- (void)_returnCombinedImage:(id)a0 generation:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end
