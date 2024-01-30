@class NSString, NSURL, CKVProvisionalResourceManager;

@interface CKVSkitReader : NSObject <CKVSkitReadAccess> {
    NSURL *_directoryURL;
    CKVProvisionalResourceManager *_resourceManager;
    struct unique_ptr<skitbridge::Searcher, std::default_delete<skitbridge::Searcher>> { struct __compressed_pair<skitbridge::Searcher *, std::default_delete<skitbridge::Searcher>> { struct Searcher *__value_; } __ptr_; } _searcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithSkitDirectoryURL:(id)a0;
- (id)matchSpansOfTokenChain:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSkitDirectoryURL:(id)a0 lifespan:(double)a1;
- (id)indexLocale;
- (id /* block */)_activationBlock;
- (BOOL)deactivate;
- (id /* block */)_deactivationBlock;
- (void)dealloc;
- (id).cxx_construct;

@end
