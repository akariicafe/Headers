@class NSString;

@interface PLSearchMetadataStore : NSObject {
    NSString *_storePath;
}

- (id)initWithPath:(id)a0;
- (void)deleteStore;
- (void).cxx_destruct;
- (void)updateSearchMetadataTo:(id)a0;
- (id)currentSearchMetadata;

@end
