@class NSArray, NSItemProvider;

@interface WebItemProviderLoadResult : NSObject {
    struct RetainPtr<NSMutableDictionary<NSString *,NSURL *>> { void *m_ptr; } _fileURLs;
    struct RetainPtr<NSItemProvider> { void *m_ptr; } _itemProvider;
    struct RetainPtr<NSArray<NSString *>> { void *m_ptr; } _typesToLoad;
}

@property (readonly, nonatomic) NSArray *loadedFileURLs;
@property (readonly, nonatomic) NSArray *loadedTypeIdentifiers;
@property (readonly, nonatomic) BOOL canBeRepresentedAsFileUpload;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSArray *typesToLoad;

+ (id)loadResultWithItemProvider:(id)a0 typesToLoad:(id)a1;

- (id)fileURLForType:(id)a0;
- (id)initWithItemProvider:(id)a0 typesToLoad:(id)a1;
- (void)setFileURL:(id)a0 forType:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
