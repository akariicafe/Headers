@class NSURL, NSData, NSFileWrapper;

@interface QLZipArchive : NSObject {
    struct archive { } *_archive;
    NSURL *_url;
    NSData *_data;
    NSFileWrapper *_fileWrapper;
}

- (id)initWithData:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)fileWrapper;
- (id)libarchiveError;
- (id)readCurrentDataWithEntry:(struct archive_entry { } *)a0 error:(id *)a1;
- (BOOL)_reopenWithError:(id *)a0;
- (void)enumerateEntriesWithHandler:(id /* block */)a0;

@end
