@class NSString, NSData, NSFileHandle, NSNumber;

@interface _HKZipArchiveExtractor : NSObject {
    NSString *_pathname;
    NSData *_archiveData;
    NSFileHandle *_fileHandle;
    NSNumber *_numberOfEntries;
    BOOL _isEnumeratingEntries;
}

@property (readonly, nonatomic) struct archive { } *archive;
@property (readonly, nonatomic) long long enumerationCount;

- (id)initWithURL:(id)a0;
- (id)initWithData:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithData:(id)a0 fileHandle:(id)a1 path:(id)a2;
- (BOOL)enumerateEntriesWithError:(id *)a0 block:(id /* block */)a1;
- (id)initWithFileHandle:(id)a0;
- (id)initWithPathname:(id)a0;
- (id)numberOfEntriesWithError:(id *)a0;

@end
