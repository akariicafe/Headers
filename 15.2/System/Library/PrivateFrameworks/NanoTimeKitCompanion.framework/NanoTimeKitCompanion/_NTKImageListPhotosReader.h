@class NSMutableArray;

@interface _NTKImageListPhotosReader : NTKPhotosReader {
    NSMutableArray *_photos;
}

- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithResourceDirectory:(id)a0;

@end
