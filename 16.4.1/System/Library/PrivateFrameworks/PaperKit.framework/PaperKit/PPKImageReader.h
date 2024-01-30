@interface PPKImageReader : NSObject

+ (id)_privateImageMetadataDescriptors;

- (id)_readDataFromTagAtPath:(id)a0 inMetadata:(struct CGImageMetadata { } *)a1;
- (id)_readAnnotationsFromDataProvider:(struct CGDataProvider { } *)a0;

@end
