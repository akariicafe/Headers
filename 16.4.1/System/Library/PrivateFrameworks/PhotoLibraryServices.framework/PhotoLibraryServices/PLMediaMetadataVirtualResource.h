@interface PLMediaMetadataVirtualResource : PLVirtualResource {
    unsigned long long _dataLength;
}

- (long long)dataLength;
- (long long)estimatedDataLength;
- (id)initWithAsset:(id)a0 resourceType:(unsigned int)a1 version:(unsigned int)a2 recipeID:(unsigned int)a3 dataLength:(unsigned long long)a4;

@end
