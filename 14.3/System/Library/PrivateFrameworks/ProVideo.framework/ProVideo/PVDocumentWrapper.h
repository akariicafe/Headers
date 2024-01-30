@interface PVDocumentWrapper : NSObject {
    void *_ozxDocument;
}

- (void)dealloc;
- (id)initWithOZXDocument:(void *)a0 forKey:(id)a1;
- (void *)ozxDocument;

@end
