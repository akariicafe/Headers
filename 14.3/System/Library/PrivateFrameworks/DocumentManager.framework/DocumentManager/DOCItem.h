@class NSString, FPItem, NSURL, FPSandboxingURLWrapper;

@interface DOCItem : NSObject <NSSecureCoding> {
    FPSandboxingURLWrapper *_wrapper;
    BOOL _needsToBeImported;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contentType;
@property (retain) NSString *bookmarkableString;
@property (retain) FPItem *fileProviderItem;
@property (copy, nonatomic) NSURL *fileURL;

+ (BOOL)isAnyItemAFault:(id)a0;
+ (id)documentsURLsForItems:(id)a0;
+ (id)_wrapperForURL:(id)a0 error:(id *)a1;
+ (void)_fetchDocumentURLFromBookmarkableString:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isAnyFPItemAFault:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)prepareForMode:(unsigned long long)a0 usingBookmark:(BOOL)a1 completionBlock:(id /* block */)a2;
- (BOOL)needsToBeImported;
- (void)copyURLToInbox:(id)a0 completion:(id /* block */)a1;
- (void)setNeedsToBeImported:(BOOL)a0;
- (id)initWithBookmarkableString:(id)a0 fileProviderItem:(id)a1;
- (id)initWithURL:(id)a0 fileProviderItem:(id)a1;
- (id)coordinatedFileURL;
- (id)fileURLForUploading;

@end
