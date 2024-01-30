@class NSString, QLItem, NSData, NSURL;

@interface QLDataFetcher : QLItemFetcher {
    NSData *_data;
    NSString *_contentType;
    NSString *_previewItemTitle;
    NSURL *_temporaryURL;
    QLItem *_item;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)itemSize;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)shareableItem;
- (void)loadDataIfNeeded;
- (void)_deleteTempraryFileIfNeeded;
- (id)_createTemporaryFileIfNeeded;
- (id)_temporaryFilename;
- (id)initWithItem:(id)a0 contentType:(id)a1;
- (id)initWithData:(id)a0 contentType:(id)a1 previewItemTitle:(id)a2;
- (void)prepareShareableItem:(id /* block */)a0;
- (id)fetchedContent;
- (id)newItemProvider;
- (void)encodeWithCoder:(id)a0;

@end
