@interface TSPWrittenComponentMetadataDictionary : NSObject {
    void *_map;
}

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)setMetadata:(id)a0 forComponentIdentifier:(long long)a1;
- (id)metadataForComponentIdentifier:(long long)a0;
- (void)enumerateMetadataUsingBlock:(id /* block */)a0;

@end
