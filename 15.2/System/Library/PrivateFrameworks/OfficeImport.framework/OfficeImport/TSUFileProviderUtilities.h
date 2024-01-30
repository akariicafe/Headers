@interface TSUFileProviderUtilities : NSObject

+ (void)initialize;
+ (void)setAlternateContentsURL:(id)a0 onDocumentURL:(id)a1 completion:(id /* block */)a2;
+ (void)fetchAlternateContentsURLForDocumentURL:(id)a0 completion:(id /* block */)a1;
+ (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)a0 completion:(id /* block */)a1;
+ (void)bookmarkableStringFromDocumentURL:(id)a0 completion:(id /* block */)a1;

- (id)init;

@end
