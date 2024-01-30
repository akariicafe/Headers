@class NSURL, NSString;

@interface HMDFileManager : HMFObject <HMDFileManager>

@property (readonly, copy) NSURL *heroFrameStoreDirectoryURL;
@property (readonly, copy) NSURL *legacyHeroFrameStoreDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (id)dataWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (BOOL)linkItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)fileHandleForReadingFromURL:(id)a0 error:(id *)a1;
- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)fileExistsAtURL:(id)a0;
- (BOOL)writeJSONObject:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)JSONObjectWithURL:(id)a0 error:(id *)a1;
- (BOOL)zipItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)writeData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
