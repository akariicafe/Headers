@class NSData, QLZipArchive, NSURL, NSError;

@interface QLZipArchiveEntry : NSObject {
    NSError *_error;
}

@property struct archive_entry { } *entry;
@property (weak) QLZipArchive *archive;
@property (retain) NSData *data;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)readDataWithError:(id *)a0;

@end
