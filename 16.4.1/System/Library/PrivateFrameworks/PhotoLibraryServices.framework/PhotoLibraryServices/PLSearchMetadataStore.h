@class NSString;

@interface PLSearchMetadataStore : NSObject {
    NSString *_storePath;
}

- (id)initWithPath:(id)a0;
- (id)currentSearchMetadata;
- (void)deleteStore;
- (void).cxx_destruct;
- (void)updateSearchMetadataTo:(id)a0;

@end
