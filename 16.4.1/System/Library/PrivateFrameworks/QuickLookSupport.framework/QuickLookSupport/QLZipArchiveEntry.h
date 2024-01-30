@class NSData, QLZipArchive, NSURL, NSError;

@interface QLZipArchiveEntry : NSObject {
    NSError *_error;
}

@property struct archive_entry { } *entry;
@property (weak) QLZipArchive *archive;
@property (retain) NSData *data;
@property (readonly, nonatomic) NSURL *url;

- (id)readDataWithError:(id *)a0;
- (void).cxx_destruct;

@end
