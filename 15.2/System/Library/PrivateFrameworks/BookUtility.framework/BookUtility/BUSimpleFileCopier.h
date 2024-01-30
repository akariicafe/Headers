@class NSURL, NSString;
@protocol BUFileCopierDelegate;

@interface BUSimpleFileCopier : NSObject <NSFileManagerDelegate, BUFileCopier>

@property (retain, nonatomic) NSURL *fromURL;
@property (retain, nonatomic) NSURL *currentCopyItemURL;
@property (weak, nonatomic) id<BUFileCopierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)countFilesAndSizesInDirectory:(id)a0 totalFileSize:(unsigned long long *)a1 totalFileCount:(unsigned long long *)a2 totalFileCountExcludeDir:(unsigned long long *)a3;

- (id)initWithURL:(id)a0;
- (BOOL)fileManager:(id)a0 shouldCopyItemAtURL:(id)a1 toURL:(id)a2;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_finishCurrentCopyItem;
- (BOOL)countTotalFileSize:(unsigned long long *)a0 totalFileCount:(unsigned long long *)a1;

@end
