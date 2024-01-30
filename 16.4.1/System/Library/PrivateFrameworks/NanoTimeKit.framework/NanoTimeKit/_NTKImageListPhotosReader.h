@class NSMutableArray;

@interface _NTKImageListPhotosReader : NTKPhotosReader {
    NSMutableArray *_photos;
}

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithResourceDirectory:(id)a0;

@end
