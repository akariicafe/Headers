@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface _LTHotfixManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSURL *hotfixURL;

+ (void)initialize;

- (void)updateHotfix:(id /* block */)a0;
- (void)_downloadHotfix:(id)a0 completion:(id /* block */)a1;
- (void)_downloadMappingPlist:(id /* block */)a0;
- (void)_decompressArchive:(id)a0 to:(id)a1 error:(id *)a2;
- (void)_downloadWithURL:(id)a0 completion:(id /* block */)a1;
- (id)_CDNURL:(id)a0;
- (id)init;
- (void)deleteHotfix:(id /* block */)a0;
- (void).cxx_destruct;

@end
