@interface PLMediaMetadataVirtualResource : PLVirtualResource {
    unsigned long long _dataLength;
}

- (id)initWithAsset:(id)a0 resourceType:(unsigned int)a1 version:(unsigned int)a2 recipeID:(unsigned int)a3 dataLength:(unsigned long long)a4;
- (long long)estimatedDataLength;
- (long long)dataLength;

@end
