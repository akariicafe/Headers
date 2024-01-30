@class NSURL, NSString;

@interface TSUSandboxedURL : NSObject <NSCopying, TSUURLWrapper> {
    NSURL *_URL;
    BOOL _URLStartedAccessingSecurityScopedResource;
}

@property (readonly) BOOL isUbiquitous;
@property (readonly) BOOL isDocumentUploaded;
@property (readonly) BOOL isQuotaErrorPreventingUpload;
@property (readonly) NSURL *URL;
@property (readonly) BOOL hasSandboxAccess;
@property (readonly) TSUSandboxedURL *sandboxedURL;
@property (readonly) NSURL *URLIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sandboxedURLByResolvingBookmarkData:(id)a0 options:(unsigned long long)a1 relativeToURL:(id)a2 bookmarkDataIsStale:(BOOL *)a3 error:(id *)a4;
+ (id)sandboxedURLByResolvingBookmarkData:(id)a0 relativeToURL:(id)a1 bookmarkDataIsStale:(BOOL *)a2 error:(id *)a3;
+ (void)sandboxedURLByResolvingBookmarkData:(id)a0 usingQueue:(id)a1 timeout:(double)a2 options:(unsigned long long)a3 relativeToURL:(id)a4 completionQueue:(id)a5 completionHandler:(id /* block */)a6;

- (id)initWithURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initByResolvingBookmarkData:(id)a0 options:(unsigned long long)a1 relativeToURL:(id)a2 bookmarkDataIsStale:(BOOL *)a3 error:(id *)a4;
- (id)normalize;
- (BOOL)hasUnresolvedConflicts;
- (id)fileProviderBookmarkableStringAndReturnError:(id *)a0;
- (BOOL)hasUnresolvedConflicts:(out BOOL *)a0 error:(id *)a1;
- (id)initByResolvingBookmarkData:(id)a0 relativeToURL:(id)a1 bookmarkDataIsStale:(BOOL *)a2 error:(id *)a3;
- (BOOL)isDocumentUploaded:(out BOOL *)a0 error:(id *)a1;
- (BOOL)isShared:(out BOOL *)a0 logContext:(id)a1 error:(id *)a2;
- (BOOL)isUbiquitous:(out BOOL *)a0 error:(id *)a1;
- (BOOL)isUbiquitous:(out BOOL *)a0 promised:(BOOL)a1 error:(id *)a2;
- (BOOL)isUbiquitousPromised:(BOOL)a0;
- (id)originalSandboxedURLForNormalizing;

@end
