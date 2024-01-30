@interface UPEmbedding : NSObject {
    void *_embedding;
}

- (void)dealloc;
- (id)initWithCoordinates:(id)a0;
- (unsigned long long)getDimension;
- (id)getCoordinates;

@end
