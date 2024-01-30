@class NSURL, NSData, NSFileWrapper;

@interface QLZipArchive : NSObject {
    struct archive { } *_archive;
    NSURL *_url;
    NSData *_data;
    NSFileWrapper *_fileWrapper;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)fileWrapper;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)enumerateEntriesWithHandler:(id /* block */)a0;
- (id)readCurrentDataWithEntry:(struct archive_entry { } *)a0 error:(id *)a1;
- (BOOL)_reopenWithError:(id *)a0;
- (id)libarchiveError;

@end
