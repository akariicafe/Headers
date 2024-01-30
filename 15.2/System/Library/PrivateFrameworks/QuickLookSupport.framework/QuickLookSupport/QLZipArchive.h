@class NSURL, NSData, NSFileWrapper;

@interface QLZipArchive : NSObject {
    struct archive { } *_archive;
    NSURL *_url;
    NSData *_data;
    NSFileWrapper *_fileWrapper;
}

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)fileWrapper;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)enumerateEntriesWithHandler:(id /* block */)a0;
- (id)readCurrentDataWithEntry:(struct archive_entry { } *)a0 error:(id *)a1;
- (BOOL)_reopenWithError:(id *)a0;
- (id)libarchiveError;

@end
