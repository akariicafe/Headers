@class NSString, QLItem, NSData, NSURL;

@interface QLDataFetcher : QLItemFetcher {
    NSData *_data;
    NSString *_contentType;
    NSString *_previewItemTitle;
    NSURL *_temporaryURL;
    QLItem *_item;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)itemSize;
- (void)dealloc;
- (void).cxx_destruct;
- (id)newItemProvider;
- (id)_createTemporaryFileIfNeeded;
- (void)_deleteTempraryFileIfNeeded;
- (id)_temporaryFilename;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)fetchedContent;
- (id)initWithData:(id)a0 contentType:(id)a1 previewItemTitle:(id)a2;
- (id)initWithItem:(id)a0 contentType:(id)a1;
- (void)loadDataIfNeeded;
- (void)prepareShareableItem:(id /* block */)a0;
- (id)shareableItem;

@end
