@interface TSPWrittenComponentMetadataDictionary : NSObject {
    void *_map;
}

- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (id)metadataForComponentIdentifier:(long long)a0;
- (void)enumerateMetadataUsingBlock:(id /* block */)a0;
- (void)setMetadata:(id)a0 forComponentIdentifier:(long long)a1;

@end
