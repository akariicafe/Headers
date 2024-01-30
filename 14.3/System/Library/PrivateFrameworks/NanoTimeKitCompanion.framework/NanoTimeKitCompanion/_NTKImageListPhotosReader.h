@class NSMutableArray;

@interface _NTKImageListPhotosReader : NTKPhotosReader {
    NSMutableArray *_photos;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithResourceDirectory:(id)a0;

@end
